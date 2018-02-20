/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:28:43 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:01:34 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <mlx.h>

void					del_image(void *mlx, t_image **ip)
{
	mlx_destroy_image(mlx, (*ip)->imgp);
	ft_memdel((void**)ip);
}
