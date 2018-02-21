/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_mouse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:16:29 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 17:53:42 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>
#include <mouse.h>
#include <stdio.h>

/* static void				print_mouse(t_mouse *ms) */
/* { */
/* 	printf(("mouse pv:\n" */
/* 			"\tpress x: %d\n" */
/* 			"\tpress y: %d\n" */
/* 			"\tpress button: %d\n"), */
/* 		   (int)ms->pv->x, (int)ms->pv->y, */
/* 		   (int)ms->pv->c); */
/* 	printf(("mouse rv:\n" */
/* 			"\trelease x: %d\n" */
/* 			"\trelease y: %d\n" */
/* 			"\trelease button: %d\n"), */
/* 		   (int)ms->rv->x, (int)ms->rv->y, */
/* 		   (int)ms->rv->c); */
/* } */

static void				handle_scroll(t_env *env, int btn)
{
	env->pln->sx += SCROLL_UP(btn) ? (1) : (-1);
	env->pln->sy += SCROLL_UP(btn) ? (1) : (-1);
}

void					handle_mouse(t_env *env)
{
	t_mouse				*ms;

	ms = env->ms;
//	print_mouse(ms);
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
