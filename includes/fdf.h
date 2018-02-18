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

# include <plain.h>

typedef struct			s_fdf
{
	void				*mlx;
	void				*window;
	void				*image;
	char				*image_data;
	int					bpp;
	int					line_size;
	int					endian;
}						t_fdf;

#endif
