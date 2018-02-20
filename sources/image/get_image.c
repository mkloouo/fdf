/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:31 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 19:11:41 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <libft.h>
#include <mlx.h>
#include <stdio.h>

t_image					*get_image(void *mlx, int width, int height)
{
	t_image				*i;

	if ((i = (t_image*)ft_memalloc(sizeof(t_image))))
	{
		i->width = width;
		i->height = height;
		i->lendian = 0x11223344;
		i->lendian = (((unsigned char*)&i->lendian)[0] == 0x11)
			? (1)
			: (0);
		i->image = mlx_new_image(mlx, width, height);
		i->image_data = mlx_get_data_addr(i->image, &i->bpp,
											&i->sl, &i->endian);
	}
	return (i);
}
