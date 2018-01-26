/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_point2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 17:09:15 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 19:30:09 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <point.h>
#include <ft.h>

t_point2				*get_point2(double x, double y)
{
	t_point2			*p;

	if ((p = (t_point2*)ft_memalloc(sizeof(t_point2))))
	{
		p->x = x;
		p->y = y;
	}
	return (p);
}
