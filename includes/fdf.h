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
# include <image.h>

typedef struct			s_fdf
{
	void				*mlx;
	void				*window;
	t_image				*img;
	t_plain				*plain;
}						t_fdf;


t_fdf					*get_fdf(t_plain *plain);
void					start_fdf(t_fdf *fdf);

#endif
