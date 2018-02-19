/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_fdf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:17 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:11:17 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>
#include <mlx.h>
#include <hooks.h>

void					start_fdf(t_fdf *fdf)
{
	mlx_key_hook(fdf->window, &keyboard_hook, fdf);
	mlx_mouse_hook(fdf->window, &mouse_hook, fdf);
	mlx_loop(fdf->mlx);
}
