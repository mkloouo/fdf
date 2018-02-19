/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_point_el.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:12:01 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:12:01 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <point.h>

t_list					*get_point_el(float x, float y, float z, int color)
{
	t_list				*el;
	t_point				*p;

	el = NULL;
	if ((p = get_point(x, y, z, color)))
	{
		el = ft_lstnew(p, sizeof(t_point));
		delete_point(&p);
	}
	return (el);
}
