/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:41:16 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/24 00:43:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <handlers.h>
#include <mouse.h>

static void				scroll_handler(int btn, t_plain *pln)
{
	t_vec3f				v;
	float				val;

	val = SCROLL_UP_BUTTON(btn) ? (0.5f) : (-0.5f);
	set_vec3f(&v, val, val, val);
	scale_plain(pln, &v);
}

static void				left_button_handler(t_env *env)
{
	t_vec3f				v;

	set_vec3f(&v, (env->ms->cv->x - env->ms->pv->x),
				(env->ms->cv->y - env->ms->pv->y), 0);
	env->ms->pv->x = env->ms->cv->x;
	env->ms->pv->y = env->ms->cv->y;
	translate_plain(env->pln, &v);
	update_env(env);
}

static void				right_button_handler(t_env *env)
{
	t_vec3f				v;

	set_vec3f(&v, (env->ms->cv->x - env->ms->pv->x) / 16,
				(env->ms->cv->y - env->ms->pv->y) / 16,
			  (env->ms->cv->y - env->ms->cv->x) / 16);
	env->ms->pv->x = env->ms->cv->x;
	env->ms->pv->y = env->ms->cv->y;
	rotate_plain(env->pln, &v);
	update_env(env);
}

void					mouse_handler(t_env *env, int event_type)
{
	t_mouse				*ms;

	ms = env->ms;
	if (event_type == MOTION_NOTIFY)
	{
		if (ms->pressed && LEFT_BUTTON(env->ms->btn))
			left_button_handler(env);
		else if (ms->pressed && RIGHT_BUTTON(env->ms->btn))
			right_button_handler(env);
	}
	if (event_type == MOUSE_BUTTON_PRESS)
	{
		if (MOUSE_SCROLL(ms->btn))
			scroll_handler(ms->btn, env->pln);
		update_env(env);
	}
}