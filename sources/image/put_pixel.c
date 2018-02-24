/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/24 02:19:12 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>

void					put_pixel(t_image *img, t_vec3i *v)
{
	int					opp;
	int					temp;
	char				*p;

	if (IN_IMAGE(v, img->w, img->h))
	{
		opp = img->bp / 8;
		temp = opp;
		p = (img->id + (img->coord->y - (int)v->y) * img->sl);
		while (opp--)
		{
			if (img->en == img->le)
				*(p + ((int)v->x + img->coord->x) * temp + opp) = ((unsigned char *)(&v->z))[
					((img->en) ? (4 - temp + opp) : (opp))];
			else
				*(p + ((int)v->x + img->coord->x) * temp + opp) = ((unsigned char *)(&v->z))[
					((img->en) ? (temp - 1 - opp) : (3 - opp))];
		}
	}
}
