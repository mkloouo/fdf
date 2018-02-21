/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_mouse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:16:29 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 18:15:18 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>
#include <mouse.h>

static void				handle_scroll(t_env *env, int btn)
{
	env->pln->sx += SCROLL_UP(btn) ? (1) : (-1);
	env->pln->sy += SCROLL_UP(btn) ? (1) : (-1);
}

void					handle_mouse(t_env *env)
{
	t_mouse				*ms;

	ms = env->ms;
	if (ms->pv->c == ms->rv->c)
	{
		if (MOUSE_LEFT_BUTTON(ms->rv->c))
		{
			env->pln->px += (ms->rv->x - ms->pv->x);
			env->pln->py += (ms->rv->y - ms->pv->y);
			update_env(env);
		}
		if (MOUSE_SCROLL_BUTTON(ms->rv->c))
		{
			handle_scroll(env, ms->rv->c);
			update_env(env);
		}
	}
}
