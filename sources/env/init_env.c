/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:43:53 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/20 23:30:19 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <mlx.h>
#include <libft.h>

t_env					*init_env(t_plain *pln)
{
	t_env				*env;

	if ((env = (t_env*)ft_memalloc(sizeof(t_env))))
	{
		env->mlx = mlx_init();
		env->win = mlx_new_window(env->mlx, DEFAULT_WIDTH,
								  DEFAULT_HEIGHT,
								  "FdF");
		env->img = get_image(env->mlx, DEFAULT_WIDTH, DEFAULT_HEIGHT);
		env->pln = pln;
	}
	return (env);
}
