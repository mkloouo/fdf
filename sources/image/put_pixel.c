/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:00:10 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>

void					put_pixel(t_image *img, t_vec2 *v)
{
	int					opp;
	int					temp;
	char				*p;

	if (v->x >= 0 && v->x < img->w &&
		v->y >= 0 && v->y < img->h && img)
	{
		opp = img->bpp / 8;
		temp = opp;
		p = (img->imgd + (int)v->y * img->sl);
		while (opp--)
		{
			if (img->end == img->lend)
				*(p + (int)v->x * temp + opp) = ((unsigned char *)(&v->c))[
					((img->end) ? (4 - temp + opp) : (opp))];
			else
				*(p + (int)v->x * temp + opp) = ((unsigned char *)(&v->c))[
					((img->end) ? (temp - 1 - opp) : (3 - opp))];
		}
	}
}
