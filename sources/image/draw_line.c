/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:29 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 20:34:47 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <math.h>
/*
0 -> dx
1 -> dy
2 -> sx
3 -> sy
4 -> d
5 -> d1
6 -> d2
7 -> x
8 -> y
9 -> i
 */
static int				*init_data(t_point *p1, t_point *p2)
{
	int					*data;
	int					x;
	int					y;

	if ((data = (int*)ft_memalloc(sizeof(int) * 9)))
	{
		data[0] = fabs(p2->x - p1->x);
		data[1] = fabs(p2->y - p1->y);
		x = p1->x;
		y = p1->y;
		if (data[1] > data[0])
		{
			ft_swap(&x, &y);
			ft_swap((data + 1), (data));
		}
		data[2] = p2->x >= p1->x ? 1 : -1;
		data[3] = p2->y >= p1->y ? 1 : -1;
		if (data[3] > data[2])
			ft_swap((data + 3), (data + 2));
		data[4] = (data[1] << 1) - data[1];
		data[5] = data[1] << 1;
		data[6] = (data[1] - data[0]) << 1;
		data[7] = x + data[2];
		data[8] = y;
	}
	return (data);
}

void					draw_line(t_image *img, t_point *p1, t_point *p2)
{
	int				*data;
	int				i;

	if ((data = init_data(p1, p2)))
	{
		i = 1;
		put_pixel(img, p1->x, p1->y, p1->color);
		while (i <= data[0])
		{
			if (data[4] > 0)
			{
				data[4] += data[6];
				data[8] += data[3];
			}
			else
				data[4] = data[5];
			put_pixel(img, data[7], data[8], p1->color);
		}
		ft_memdel((void**)&data);
	}
}
