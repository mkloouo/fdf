/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_window.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:31:44 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 17:06:09 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <mlx.h>
#include <libft.h>

void					setup_window(t_env *env)
{
	if (env->w == 0)
		env->w = get_preferred_width(env->pln);
	if (env->h == 0)
		env->h = get_preferred_height(env->pln);		
	if (env->w < WIN_MIN_WIDTH || env->w > WIN_MAX_WIDTH)
		env->w = WIN_DEFAULT_WIDTH;
	if (env->h < WIN_MIN_HEIGHT || env->h > WIN_MAX_HEIGHT)
		env->h = WIN_DEFAULT_HEIGHT;
	env->mlx = mlx_init();
	env->win = mlx_new_window(env->mlx, env->w, env->h, env->title);
	env->img = get_image(env->mlx, env->w, env->h);
}
