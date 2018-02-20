/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_env.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:47:04 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:36:03 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <mlx.h>

void					start_env(t_env *env)
{
	init_hooks(env);
	env->pln->px = env->img->w / 2;
	env->pln->py = env->img->h / 2;
	update_env(env);
	mlx_loop(env->mlx);
}
