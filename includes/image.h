/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:18:14 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 19:27:47 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMAGE_H
# define IMAGE_H

# include <point.h>
# include <plain.h>

typedef struct			s_image
{
	void				*image;
	char				*image_data;
	int					bpp;
	int					sl;
	int					endian;
	int					lendian;
	int					width;
	int					height;
}						t_image;

t_image					*get_image(void *mlx, int width, int height);
void					delete_image(void *mlx, t_image **ip);

void					put_image(void *mlx, void *window, t_image *image,
									t_point2 pos);

void					redraw_plain(t_plain *plain, t_image *image);
void					put_pixel(t_image *image, int x, int y, unsigned int c);
void					draw_line(t_image *image, t_point2 *p1, t_point2 *p2);

#endif
