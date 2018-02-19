/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redraw.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:15 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:11:15 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>
#include <mlx.h>

void					redraw(t_fdf *fdf)
{
	if (fdf)
		mlx_put_image_to_window(fdf->mlx, fdf->window, fdf->image->image,
								0, 0);
}