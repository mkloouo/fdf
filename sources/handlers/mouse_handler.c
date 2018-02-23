/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:41:16 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/23 11:35:41 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>
#include <mouse.h>

static void				scroll_handler(int btn, t_plain *pln)
{
	t_vec3f				v;
	int					val;

	val = SCROLL_UP_BUTTON(btn) ? (1) : (-1);
	set_vec3f(&v, val, val, val);
	scale_plain(pln, &v);
}

void					mouse_handler(t_env *env, int event_type)
{
	t_mouse				*ms;
	t_vec3f				v;

	ms = env->ms;
	if (event_type == MOTION_NOTIFY)
	{
		if (ms->pressed && LEFT_BUTTON(env->ms->btn))
		{
			set_vec3f(&v, ms->cv->x - env->pln->tr->pos->x,
					  ms->cv->y - env->pln->tr->pos->y, 0);
			translate_plain(env->pln, &v);
			update_env(env);
		}
		else if (ms->pressed && RIGHT_BUTTON(env->ms->btn))
		{
			set_vec3f(&v, ms->cv->y - env->pln->tr->rot->x,
					  ms->cv->x - env->pln->tr->rot->y,
					  (ms->cv->y + ms->cv->x) - env->pln->tr->rot->z);
			rotate_plain(env->pln, &v);
			update_env(env);
		}
	}
	if (event_type == MOUSE_BUTTON_RELEASE)
	{
		if (MOUSE_SCROLL(ms->btn))
			scroll_handler(ms->btn, env->pln);
		update_env(env);
	}
}
