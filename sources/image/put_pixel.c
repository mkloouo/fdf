/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 19:43:57 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>

void					put_pixel(t_image *i, int x, int y, unsigned int color)
{
	int					c;
	int					temp;
	char				*p;

	if (x >= 0 && x < i->width && y >= 0 && y < i->height && i)
	{
		c = i->bpp / 8;
		temp = c;
		p = (i->image_data + y * i->sl);
		while (c--)
		{
			if (i->endian == i->local_endian)
				*(p + x * temp + c) = ((unsigned char *)(&color))[
					((i->endian) ? (4 - temp + c) : (c))];
			else
				*(p + x * temp + c) = ((unsigned char *)(&color))[
					((i->endian) ? (temp - 1 - c) : (3 - c))];
		}
	}
}
