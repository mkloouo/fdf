/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_plain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 14:04:20 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 14:06:04 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

t_plain					*get_plain(t_list *points, int width, int height)
{
	t_plain				*p;

	if ((p = (t_plain*)ft_memalloc(sizeof(t_plain))))
	{
		p->points = points;
		p->width = width;
		p->height = height;
	}
	return (p);
}
