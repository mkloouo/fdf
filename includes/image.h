
#ifndef IMAGE_H
# define IMAGE_H

#include <point.h>

typedef struct			s_image
{
	void				*image;
	char				*image_data;
	int					bpp;
	int					line_size;
	int					endian;
	int					width;
	int					height;
}						t_image;

t_image					*get_image(void *mlx, int width, int height);

void					put_pixel(t_image *i, int x, int y, unsigned int color);
void					draw_line(t_image *img, t_point *p1, t_point *p2);

#endif
