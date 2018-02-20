/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:31 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:02:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <libft.h>
#include <mlx.h>

t_image					*get_image(void *mlx, int w, int h)
{
	t_image				*img;

	if ((img = (t_image*)ft_memalloc(sizeof(t_image))))
	{
		img->imgp = mlx_new_image(mlx, w, h);
		img->imgd = mlx_get_data_addr(img->imgp, &img->bpp,
											&img->sl, &img->end);
		img->lend = 0x11223344;
		img->lend = (((unsigned char*)&img->lend)[0] == 0x11) ? (1) : (0);
		img->w = w;
		img->h = h;
	}
	return (img);
}
