/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 13:55:44 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 19:58:18 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <errno.h>
# include <ft.h>
# include <plain.h>

typedef struct			s_fdf
{
	void				*mlx;
	void				*win;
	void				*img;
	char				*data;
	t_plain				*plain;
	int					bpp;
	int					size_line;
	int					endian;
}						t_fdf;

int						fdf(char *file);

t_fdf					*init_fdf(char *plain_name, t_plain *plain);

void					print_usage(void);
void					print_error(void);

#endif
