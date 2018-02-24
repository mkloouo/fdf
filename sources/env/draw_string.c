/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 05:31:21 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/24 05:35:42 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <mlx.h>

void					draw_string(t_env *env, t_vec2i *p, unsigned int color,
									char *str)
{
	mlx_string_put(env->mlx, env->win, p->x, p->y, color, str);
}
