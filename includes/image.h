/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:18:14 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 03:12:19 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMAGE_H
# define IMAGE_H

# include <plain.h>
# include <vector.h>

# define IN_IMAGE(V,W,H) (V->x >= 0 && V->x < W && V->y >= 0 && V->y < H)
# define RGB_COLOR(A,R,G,B) ((A << 24) | (R << 16) | (G << 8) | (B))

/*
 * Image pointer
 * Image data pointer
 * Image bit per pixel
 * Length of line in image
 * Image endian
 * Local endian
 * Width
 * Height
 */

typedef struct			s_image
{
	void				*ip;
	char				*id;
	int					bp;
	int					sl;
	int					en;
	int					le;
	int					w;
	int					h;
}						t_image;

t_image					*get_image(void *mlx, int w, int h);
void					del_image(void *mlx, t_image **ip);

void					draw_line(t_image *img, t_vec2i *v1, t_vec2i *v2, t_vec2i *c);
void					put_pixel(t_image *img, t_vec2i *v, unsigned int c);
unsigned int			map_color(unsigned int c1, unsigned int c2, float ratio);

void					put_plain_to_image(t_plain *pln, t_image *img);
t_vec2i					*perspective_3d_to_2d(t_vec3f *v, t_transf *tv,
											  int row, int col);

#endif
