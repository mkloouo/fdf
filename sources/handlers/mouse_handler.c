/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:41:16 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 04:10:17 by modnosum         ###   ########.fr       */
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

void					mouse_handler(t_env *env)
{
	t_mouse				*ms;
	t_vec3f				v;

	ms = env->ms;
	if (ms->pressed)
	{
		set_vec3f(&v, ms->cv->x - env->pln->tr->pos->x,
				  ms->cv->y - env->pln->tr->pos->y, 0);
		translate_plain(env->pln, &v);
	}
	else if (MOUSE_SCROLL(ms->btn))
		scroll_handler(ms->btn, env->pln);
	else
		return ;
	update_env(env);
}
