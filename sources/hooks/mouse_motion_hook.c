/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_motion_hook.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:49:23 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:53:57 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hooks.h>
#include <image.h>
#include <mlx.h>
#include <fdf.h>

int						mouse_motion_hook(int x, int y, void *fdf)
{
	unsigned int		color;

	color = mlx_get_color_value(((t_fdf*)(fdf))->mlx, 0x00FFFFFF);
	put_pixel(((t_fdf*)(fdf))->image, x, y, color);
	redraw((t_fdf*)fdf);
	return (0);
}
