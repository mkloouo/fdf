/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 11:10:30 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 15:41:03 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <libft.h>
# include <errno.h>

# define DEFAULT_WIDTH 600
# define DEFAULT_HEIGHT 600
# define DEFAULT_TITLE "default"
# define DEFAULT_COLOR 0x00FFFFFF

typedef struct			s_plain
{
	t_list				*points;
	int					width;
	int					height;
}						t_plain;

typedef struct			s_prog
{
	void				*mlx;
	void				*win;
	void				*img;
	char				*img_data;
	int					bpp;
	int					size_line;
	int					endian;
	t_plain				*plain;
}						t_prog;

typedef struct			s_point
{
	double				x;
	double				y;
	double				z;
	int					color;
}						t_point;

void					print_usage(char *program_name);
t_prog					*parse_arg(char *file);
t_plain					*read_plain_from_file(char *file);
void					init_hooks(t_prog *p);

t_prog					*init_prog(t_plain *pl);
t_plain					*get_plain(t_list *points, int width, int height);
t_point					*get_point(double x, double y, double z, int color);

void					destroy_prog(t_prog **pp);
void					destroy_plain(t_plain **pp);
void					destroy_point(void *point, size_t point_size);

void					error_exit(char *program_name);

#endif
