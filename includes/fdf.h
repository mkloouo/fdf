/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 13:55:44 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/23 20:25:59 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <errno.h>
# include "libft.h"

typedef struct			s_point
{
	double				x;
	double				y;
	double				z;
	int					color;
}						t_point;

typedef struct			s_plain
{
	t_list				*points;
	size_t				height;
	size_t				width;
}						t_plain;

typedef struct			s_window
{
	void				*mlx;
	void				*win;
}						t_window;

/*
** Presents user with wireframe representation of points
** provided from (file_name)
**
** Param1: points source file
** Return: 0 on success, positive value on error
*/
int						fdf(char *file_name);

/*
** Read plain from a file.
** Example plain:
** plain.fdf
** =========
** 0 0 0 0 0
** 0 1 1 0 -1
** 1. 1 -1 -1.321
** 0 -1 0 0
**
** Param1: fd to read file from
** Return: pointer to t_plain (new plain) or NULL on error
*/
t_plain					*get_plain(int fd);
void					delete_plain(t_plain **pp);

/*
** Print usage.
**
** Param0: program name
** Param1: usage message after your program name
*/
void					print_usage(char *prog_name, char *usage);

/*
** Print error, if one occures. Have to include <errno.h>
**
** Param0: program name
*/
void					print_error(char *prog_name);

#endif
