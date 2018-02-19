/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_fdf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:17 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 19:49:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>
#include <mlx.h>
#include <hooks.h>

void					start_fdf(t_fdf *fdf)
{
	mlx_key_hook(fdf->window, &keyboard_hook, fdf);
	mlx_mouse_hook(fdf->window, &mouse_release_hook, fdf);
	/* mlx_hook(fdf->window, MOTION_NOTIFY, MOUSE_MOTION_MASK, */
	/* 		 &mouse_motion_hook, fdf); */
//	mlx_expose_hook(fdf->window, &expose_hook, fdf);
	/* draw_plain(fdf->mlx, fdf->image, fdf->plain); */
	/* redraw(fdf); */
	mlx_loop(fdf->mlx);
}
