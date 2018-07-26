/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_vec3i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 20:40:21 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/23 20:40:39 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>
#include <libft.h>

t_vec3i					*get_vec3i(int x, int y, int z)
{
	t_vec3i			*v;

	if ((v = (t_vec3i*)ft_memalloc(sizeof(t_vec3i))))
	{
		v->x = x;
		v->y = y;
		v->z = z;
	}
	return (v);
}
