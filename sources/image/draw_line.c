/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:29 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/23 18:35:44 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <libft.h>

/*
 * Reminder
 * dx == data[0] --> will be swapped with dy if dy > dx
 * dy == data[1]
 * sx == data[2] --> will be swapped with sy if dy > dx
 * sy == data[3]
 * d == data[4]
 * d1 == data[5]
 * d2 == data[6]
 * x == data[7] --> will be swapped with y if dy > dx
 * y == data[8] 
 * i == data[9]
 * swap == data[10] --> 1 if swapped, 0 otherwise
 */

static void				init_data(int *data, t_vec2i *v1, t_vec2i *v2)
{
	int					swap;

	data[0] = ft_fabs(v2->x - v1->x);
	data[1] = ft_fabs(v2->y - v1->y);
	data[2] = (v2->x >= v1->x) ? (1) : (-1);
	data[3] = (v2->y >= v1->y) ? (1) : (-1);
	swap = !(data[1] <= data[0]);
	if (swap)
	{
		ft_swap((data), (data + 1));
		ft_swap((data + 2), (data + 3));
	}
	data[5] = data[1] << 1;
	data[4] = data[5] - data[0];
	data[6] = (data[1] - data[0]) << 1;
	data[7] = ((swap) ? (v1->y) : (v1->x)) + data[2];
	data[8] = ((swap) ? (v1->x) : (v1->y));
	data[9] = 1;
	data[10] = swap;
}

void					draw_line(t_image *img, t_vec2i *v1, t_vec2i *v2, t_vec2i *c)
{
	int					data[11];
	t_vec2i				v;

	init_data(data, v1, v2);
	put_pixel(img, v1, c->x);
	while (data[9] <= data[0])
	{
		if (data[4] > 0)
		{
			data[4] += data[6];
			data[8] += data[3];
		}
		else
			data[4] += data[5];
		set_vec2i(&v, data[(data[10] ? 8 : 7)], data[(data[10] ? 7 : 8)]);
		put_pixel(img, &v, map_color(c->x, c->y, ((float)data[9] / data[0])));
		data[9]++;
		data[7] += data[2];
	}
}
