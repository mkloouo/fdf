/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 03:10:41 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>

void					put_pixel(t_image *img, t_vec2i *v, unsigned int c)
{
	int					opp;
	int					temp;
	char				*p;

	if (IN_IMAGE(v, img->w, img->h))
	{
		opp = img->bp / 8;
		temp = opp;
		p = (img->id + (int)v->y * img->sl);
		while (opp--)
		{
			if (img->en == img->le)
				*(p + (int)v->x * temp + opp) = ((unsigned char *)(&c))[
					((img->en) ? (4 - temp + opp) : (opp))];
			else
				*(p + (int)v->x * temp + opp) = ((unsigned char *)(&c))[
					((img->en) ? (temp - 1 - opp) : (3 - opp))];
		}
	}
}
