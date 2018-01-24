/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_window.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 20:27:14 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/23 20:43:18 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "fdf.h"

t_window				*get_window(int width, int height, char *title)
{
	static void			*mlx;
	t_window			*new;

	if (!mlx)
		mlx = mlx_init();
	if ((new = (t_window*)ft_memalloc(sizeof(t_window))))
	{
		new->mlx = mlx;
		new->win = mlx_new_window(mlx, width, height, title);
		return (new);
	}
	return (NULL);
}
