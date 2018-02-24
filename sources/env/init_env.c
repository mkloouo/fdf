/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:43:53 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/24 00:17:22 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <mlx.h>
#include <libft.h>

t_env					*init_env(t_plain *pln, char *name)
{
	t_env				*env;
	char				*title;

	if ((env = (t_env*)ft_memalloc(sizeof(t_env))))
	{
		env->mlx = NULL;
		env->win = NULL;
		title = name;
		env->pln = pln;
		env->img = NULL;
		env->ms = init_mouse();
		env->kb = init_keyboard();
		env->title = title;
		env->w = 0;
		env->h = 0;
	}
	return (env);
}
