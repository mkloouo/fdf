/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:41:21 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/25 23:34:43 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>
#include <keyboard.h>
#include <stdio.h>

static void				zoom_handler(t_keyboard *kb, t_env *env)
{
	float				val;
	t_vec3f				v;

	if (kb->shift_pressed && EQUAL_BUTTON(kb->ck))
		val = (0.2);
	else if (ZOOM_IN(kb->ck) || ZOOM_OUT(kb->ck))
		val = ZOOM_IN(kb->ck) ? (0.2) : (-0.2);
	else
		return ;
	set_vec3f(&v, val, val, val);
	scale_plain(env->pln, &v);
}

static void				move_handler(t_keyboard *kb, t_env *env)
{
	t_vec3f				v;
	int					add;

	add = (kb->shift_pressed) ? 5 : 0;
	if (MOVE_UP(kb->ck))
		set_vec3f(&v, 0, -1 - add, 0);
	if (MOVE_DOWN(kb->ck))
		set_vec3f(&v, 0, 1 + add, 0);
	if (MOVE_RIGHT(kb->ck))
		set_vec3f(&v, 1 + add, 0, 0);
	if (MOVE_LEFT(kb->ck))
		set_vec3f(&v, -1 - add, 0, 0);
	translate_plain(env->pln, &v);
}

void					key_handler(t_env *env, int event_type)
{
	if (event_type == KEY_PRESS)
	{
		if (QUIT_BUTTON(env->kb->ck))
			del_env(&env);
		else if (ZOOM_BUTTON(env->kb->ck))
			zoom_handler(env->kb, env);
		else if (MOVE_BUTTON(env->kb->ck))
			move_handler(env->kb, env);
		else if (RESET_BUTTON(env->kb->ck))
			reset_plain(env->pln);
		else if (INFO_BUTTON(env->kb->ck))
			print_env(env);
		else
			printf("unknown key: %d\n", env->kb->ck);
		update_env(env);
	}
}
