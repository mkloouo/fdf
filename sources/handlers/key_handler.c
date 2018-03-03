/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:41:21 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/28 18:37:32 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>
#include <keyboard.h>

static void				zoom_handler(t_env *env)
{
	float				val;
	t_vec3f				v;

	val = ZOOM_IN(env->kb->ck, env->kb->shift_pressed) ? (0.2) : (-0.2);
	set_vec3f(&v, val, val, val);
	scale_plain(env->pln, &v);
}

static void				move_handler(t_env *env)
{
	int					btn;
	int					shift_move;
	t_vec3f				v;

	btn = env->kb->ck;
	shift_move = (env->kb->shift_pressed) ? 5 : 1;
	if (MOVE_VER(btn))
		set_vec3f(&v, 0, (MOVE_UP(btn) ? (-1) : (1)) * shift_move, 0);
	else if (MOVE_HOR(btn))
		set_vec3f(&v, (MOVE_RIGHT(btn) ? (1) : (-1)) * shift_move, 0, 0);
	translate_plain(env->pln, &v);
}

static void				z_scale_handler(t_env *env)
{
	env->pln->tr->z_scale += SCALE_Z_P(env->kb->ck) ? (0.5) : (-0.5);
}

static void				rotate_handler(t_env *env)
{
	int					btn;
	t_vec3f				v;

	btn = env->kb->ck;
	if (ROTATE_X(btn))
		set_vec3f(&v, (ROTATE_X_P(btn) ? (-1) : (1)), 0, 0);
	else if (ROTATE_Y(btn))
		set_vec3f(&v, 0, (ROTATE_Y_P(btn) ? (-1) : (1)), 0);
	else if (ROTATE_Z(btn))
		set_vec3f(&v, 0, 0, (ROTATE_Z_P(btn) ? (-1) : (1)));
	rotate_plain(env->pln, &v);
}

void					key_handler(t_env *env, int event_type)
{
	if (event_type == KEY_PRESS)
	{
		if (QUIT_BUTTON(env->kb->ck))
			del_env(&env);
		else if (ZOOM_BUTTON(env->kb->ck, env->kb->shift_pressed))
			zoom_handler(env);
		else if (SCALE_Z(env->kb->ck))
			z_scale_handler(env);
		else if (ROTATE(env->kb->ck))
			rotate_handler(env);
		else if (MOVE_BUTTON(env->kb->ck))
			move_handler(env);
		else if (RESET_BUTTON(env->kb->ck))
			reset_plain(env->pln);
		else
			return ;
		update_env(env);
	}
}
