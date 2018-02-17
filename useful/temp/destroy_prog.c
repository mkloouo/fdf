/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_prog.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 12:27:04 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 13:21:59 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>
#include <mlx.h>

void					destroy_prog(t_prog **pp)
{
	if (pp)
	{
		destroy_plain(&(*pp)->plain);
		mlx_destroy_image((*pp)->mlx, (*pp)->img);
		mlx_destroy_window((*pp)->mlx, (*pp)->win);
	}	
	ft_memdel((void**)pp);
}
