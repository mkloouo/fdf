/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_vec3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:23:45 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/20 22:24:03 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>
#include <libft.h>

t_vec3				*get_vec3(float x, float y, float z, int c)
{
	t_vec3				*p;

	if ((p = (t_vec3*)ft_memalloc(sizeof(t_vec3))))
	{
		p->x = x;
		p->y = y;
		p->z = z;
		p->c = c;
	}
	return (p);
}
