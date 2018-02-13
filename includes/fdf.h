/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 11:10:30 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 12:08:51 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <libft.h>

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

#endif
