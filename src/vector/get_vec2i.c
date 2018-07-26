/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_vec2i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:23:38 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 03:25:57 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>
#include <libft.h>

t_vec2i					*get_vec2i(int x, int y)
{
	t_vec2i			*v;

	if ((v = (t_vec2i*)ft_memalloc(sizeof(t_vec2i))))
	{
		v->x = x;
		v->y = y;
	}
	return (v);
}
