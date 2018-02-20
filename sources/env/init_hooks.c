/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_hooks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:16:52 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/20 23:32:23 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <mlx.h>
#include <keyboard.h>
#include <mouse.h>

void					init_hooks(t_env *env)
{
	mlx_hook(env->win, KEY_PRESS, KEY_PRESS_MASK,
			 &key_press_hook, env);
	mlx_hook(env->win, KEY_RELEASE, KEY_RELEASE_MASK,
			 &key_release_hook, env);
	mlx_hook(env->win, MOUSE_BUTTON_PRESS, MOUSE_BUTTON_PRESS_MASK,
			 &mouse_button_press_hook, env);
	mlx_hook(env->win, MOUSE_BUTTON_RELEASE, MOUSE_BUTTON_RELEASE_MASK,
			 &mouse_button_release_hook, env);
}
