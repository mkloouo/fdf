/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_image.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:15:50 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/24 01:49:46 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <stdio.h>

void					print_image(t_image *img)
{
	printf("Image:\n");
	if (img)
	{
		printf("Bit per pixel: %d\n", img->bp);
		printf("Line size: %d\n", img->sl);
		printf("Image endian: %d\n", img->en);
		printf("Local endian: %d\n", img->le);
		printf("Width: %d\n", img->w);
		printf("Height: %d\n", img->h);
		printf("Global coords:\n");
		print_vec2i(img->coord);
	}
}
