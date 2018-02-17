/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_point.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 14:33:29 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 14:34:57 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

t_point					*get_point(double x, double y, double z, int color)
{
	t_point				*p;

	if ((p = (t_point*)ft_memalloc(sizeof(t_point))))
	{
		p->x = x;
		p->y = y;
		p->z = z;
		p->color = color;
	}
	return (p);
}
