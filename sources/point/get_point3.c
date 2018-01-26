/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_point3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 17:10:21 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 19:30:16 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <point.h>
#include <ft.h>

t_point3				*get_point3(double x, double y, double z)
{
	t_point3			*p;

	if ((p = (t_point3*)ft_memalloc(sizeof(t_point3))))
	{
		p->x = x;
		p->y = y;
		p->z = z;
	}
	return (p);
}
