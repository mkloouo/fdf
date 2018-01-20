/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 13:55:44 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/20 18:58:04 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <stdio.h>
# include "libft.h"

typedef struct			s_vec3
{
	double				x;
	double				y;
	double				z;
}						t_vec3;

typedef struct			s_map
{
	t_list				*vector_lst;
	int					width;
	int					height;
}						t_map;

void					check_args(int required, int given, char **av);
void					print_usage(char *prog_name);
int						check_file(char *filename);

int						fdf(char *filename);

#endif
