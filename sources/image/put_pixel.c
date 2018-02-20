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

void					put_pixel(t_image *image, int x, int y, unsigned int c)
{
	int					opp;
	int					temp;
	char				*p;

	if (x >= 0 && x < image->width &&
		y >= 0 && y < image->height && image)
	{
		opp = image->bpp / 8;
		temp = opp;
		p = (image->image_data + (int)y * image->sl);
		while (opp--)
		{
			if (image->endian == image->lendian)
				*(p + (int)x * temp + opp) = ((unsigned char *)(&c))[
					((image->endian) ? (4 - temp + opp) : (opp))];
			else
				*(p + (int)x * temp + opp) = ((unsigned char *)(&c))[
					((image->endian) ? (temp - 1 - opp) : (3 - opp))];
		}
	}
}
