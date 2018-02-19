/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_plain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:12:21 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 19:46:04 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <mlx.h>
#include <stdio.h>

void					draw_plain(void *mlx, t_image *i, t_plain *p)
{
	t_list				*l;
	t_point				*point;
	int					color;

	l = p->points;
	while (l)
	{
		point = (t_point*)l->content;
		color = mlx_get_color_value(mlx, point->color);
		put_pixel(i, point->x, point->y, color);
		l = l->next;
	}
}
