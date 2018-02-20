/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_vec2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:22:54 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/20 22:23:34 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>
#include <libft.h>

t_vec2				*get_vec2(float x, float y, int c)
{
	t_vec2			*v;

	if ((v = (t_vec2*)ft_memalloc(sizeof(t_vec2))))
	{
		v->x = x;
		v->y = y;
		v->c = c;
	}
	return (v);
}
