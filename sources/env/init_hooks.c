/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_hooks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:16:52 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 17:47:28 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <mlx.h>
#include <handlers.h>

void					init_hooks(t_env *env)
{
	mlx_hook(env->win, KEY_PRESS, KEY_PRESS_MASK,
			 &key_press, env);
	mlx_hook(env->win, KEY_RELEASE, KEY_RELEASE_MASK,
			 &key_release, env);
	mlx_hook(env->win, MOUSE_BUTTON_PRESS, MOUSE_BUTTON_PRESS_MASK,
			 &ms_btn_press, env);
	mlx_hook(env->win, MOUSE_BUTTON_RELEASE, MOUSE_BUTTON_RELEASE_MASK,
			 &ms_btn_release, env);
	mlx_hook(env->win, MOTION_NOTIFY, MOTION_NOTIFY_MASK, &ms_move,
			 env);
}
