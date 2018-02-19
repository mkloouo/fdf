/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expose_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:09:08 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 19:17:03 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hooks.h>
#include <image.h>
#include <fdf.h>

int						expose_hook(void *fdf)
{
	t_fdf				*f;

	f = (t_fdf*)fdf;
	draw_plain(f->mlx, f->image, f->plain);
	redraw((t_fdf*)f);
	return (0);
}
