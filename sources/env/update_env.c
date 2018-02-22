/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:47:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 02:44:55 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <mlx.h>

void					update_env(t_env *env)
{
	t_image				*img;

	img = get_image(env->mlx, env->w, env->h);
	if (env->img)
	{
		put_plain_to_image(env->pln, env->img);
		mlx_put_image_to_window(env->mlx, env->win, env->img->ip, 0, 0);
		del_image(env->mlx, &env->img);
	}
	env->img = img;
}
