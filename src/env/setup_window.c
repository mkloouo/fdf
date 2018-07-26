/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_window.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:31:44 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/25 18:42:50 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <mlx.h>

void					setup_window(t_env *env)
{
	env->w = WIN_DEFAULT_WIDTH;
	env->h = WIN_DEFAULT_HEIGHT;
	env->mlx = mlx_init();
	env->win = mlx_new_window(env->mlx, env->w, env->h, env->title);
	env->img = get_image(env->mlx, env->w, env->h);
}
