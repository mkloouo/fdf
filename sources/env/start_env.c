/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_env.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:47:04 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/24 00:18:34 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <mlx.h>
#include <libft.h>

void					start_env(t_env *env)
{
	setup_window(env);
	init_hooks(env);
	update_env(env);
	mlx_loop(env->mlx);
}
