/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:47:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:25:26 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <mlx.h>

#include <stdio.h>

void					update_env(t_env *env)
{
	put_plain_to_image(env->pln, env->img);
	mlx_put_image_to_window(env->mlx, env->win, env->img->imgp, 0, 0);
	del_image(env->mlx, &env->img);
	env->img = get_image(env->mlx, DEFAULT_WIDTH, DEFAULT_HEIGHT);
}
