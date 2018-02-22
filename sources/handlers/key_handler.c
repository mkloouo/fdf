/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:41:21 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 04:06:45 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>
#include <keyboard.h>

static void				zoom_handler(int btn, t_plain *pln)
{
	t_vec3f				v;
	int					val;

	val = ZOOM_IN(btn) ? (1) : (-1);
	set_vec3f(&v, val, val, val);
	scale_plain(pln, &v);	
}

static void				move_handler(int btn, t_plain *pln)
{
	t_vec3f				v;

	if (MOVE_UP(btn))
		set_vec3f(&v, -1, 0, 0);
	else if (MOVE_DOWN(btn))
		set_vec3f(&v, 1, 0, 0);
	else if (MOVE_RIGHT(btn))
		set_vec3f(&v, 0, 1, 0);
	else if (MOVE_LEFT(btn))
		set_vec3f(&v, 0, -1, 0);
	translate_plain(pln, &v);
}

void					key_handler(int btn, t_env *env)
{
	if (QUIT_BUTTON(btn))
		del_env(&env);
	else if (ZOOM_BUTTON(btn))
		zoom_handler(btn, env->pln);
	else if (MOVE_BUTTON(btn))
		move_handler(btn, env->pln);
	else
		return ;
	update_env(env);
}
