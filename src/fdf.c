/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 19:56:38 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/23 20:51:38 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fdf.h"
#include "mlx.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

static void					print_plain(t_plain *p)
{
	t_list					*point_lst;
	t_point					*point;

	printf("width: %zu\nheight: %zu\n", p->width, p->height);
	point_lst = p->points;
	while (point_lst)
	{
		point = (t_point*)point_lst->content;
		printf("x: %.1f\ty: %.1f\tz: %.1f color: %#x\n", point->x, point->y,
				point->z,
				point->color);
		point_lst = point_lst->next;
	}
}

int							fdf(char *file_name)
{
	int						fd;
	t_plain					*plain;
	t_window				*w;

	if ((fd = open(file_name, O_RDONLY)) != -1)
	{
		plain = get_plain(fd);
		if (plain)
		{
			print_plain(plain);
			w = get_window(500, 500, "abc");
			mlx_loop(w->mlx);
			return (0);
		}
	}
	print_error("./fdf");
	return (2);
}
