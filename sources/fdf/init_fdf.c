/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_fdf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 19:36:08 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 20:01:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>
#include <mlx.h>

t_fdf					*init_fdf(char *plain_name, t_plain *plain)
{
	t_fdf				*f;

	f = NULL;
	if (plain)
	{
		if ((f = (t_fdf*)ft_memalloc(sizeof(t_fdf))))
		{
			f->mlx = mlx_init();
			f->win = mlx_new_window(f->mlx, 500, 500, plain_name);
			f->img = mlx_new_image(f->mlx, 500, 500);
			f->data = mlx_get_data_addr(f->img, &f->bpp, &f->size_line, &f->endian);
			f->plain = plain;
		}
	}
	return (f);
}
