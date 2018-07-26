/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:28:43 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/25 20:15:59 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <libft.h>
#include <mlx.h>

void					del_image(void *mlx, t_image **ip)
{
	if (ip && *ip)
	{
		mlx_destroy_image(mlx, (*ip)->ip);
		ft_memdel((void**)ip);
	}
}
