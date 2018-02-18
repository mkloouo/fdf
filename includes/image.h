
#ifndef IMAGE_H
# define IMAGE_H

typedef struct			s_image
{
	void				*image;
	char				*image_data;
	int					bpp;
	int					line_size;
	int					endian;
}						t_image;

#endif
