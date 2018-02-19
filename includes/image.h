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
	void				*mlx;
	void				*image;
	char				*image_data;
	int					bpp;
	int					sl;
	int					endian;
	int					width;
	int					height;
	int					local_endian;
}						t_image;

t_image					*get_image(void *mlx, int width, int height);

void					draw_plain(void *mlx, t_image *i, t_plain *p);

void					put_pixel(t_image *i, int x, int y, unsigned int color);
void					draw_line(t_image *i, t_point *p1, t_point *p2);

#endif
