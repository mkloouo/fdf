/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:18:14 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/24 02:15:50 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMAGE_H
# define IMAGE_H

# include <plain.h>
# include <vector.h>

# define IN_IMAGE(V,W,H) (V->x > -W && V->x < W && V->y > -H && V->y < H)
# define RGB_COLOR(A,R,G,B) ((A << 24) | (R << 16) | (G << 8) | (B))

/*
** Image pointer
** Image data pointer
** Image bit per pixel
** Length of line in image
** Image endian
** Local
** Width
** Height
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
	t_vec2i				*coord;
}						t_image;

t_image					*get_image(void *mlx, int w, int h);
void					del_image(void *mlx, t_image **ip);
void					print_image(t_image *img);

void					draw_line(t_image *img, t_vec3i *p1, t_vec3i *p2);
void					put_pixel(t_image *img, t_vec3i *v);
unsigned int			map_color(unsigned int c1, unsigned int c2,
									float ratio);

void					put_plain_to_image(t_plain *pln, t_image *img);
t_vec3i					*perspective_3d_to_2d(t_vec3f *v, t_plain *pln);
void					transfer_coord(t_image *img, t_plain *pln);

#endif
