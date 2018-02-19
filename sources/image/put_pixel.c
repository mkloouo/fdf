/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:15:20 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>

void					put_pixel(t_image *i, int x, int y, unsigned int color)
{
	if (x >= 0 && x < i->width && y >= 0 && y < i->height && i)
		*((int*)(i->image_data + (x * i->bpp / 8) +
				(y * i->line_size))) = color;
}
