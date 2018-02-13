/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 12:17:18 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 12:22:02 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>
#include <mlx.h>

t_prog					*init_prog(void)
{
	t_prog				*p;

	if ((p = (t_prog*)ft_memalloc(sizeof(t_prog))))
	{
		p->mlx = mlx_init();
		p->win = mlx_new_window(p->mlx, DEFAULT_WIDTH, DEFAULT_HEIGHT, DEFAULT_TITLE);
		p->img = mlx_new_image(p->mlx, DEFAULT_WIDTH, DEFAULT_HEIGHT);
		p->img_data = mlx_get_data_addr(p->img, &p->bpp, &p->size_line, &p->endian);
		p->plain = NULL;
	}
	return (p);
}
