/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_plain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:41 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 01:16:18 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>

/* static t_list			*copy_point_el(t_list *point_el) */
/* { */
/* 	t_list				*copy; */

/* 	copy = NULL; */
/* 	if (point_el) */
/* 	{ */
/* 		copy = ft_lstnew(point_el->content, */
/* 							point_el->content_size); */
/* 	} */
/* 	return (copy); */
/* } */

t_plain					*get_plain(t_list *l, int w, int h)
{
	t_plain				*p;

	if ((p = (t_plain*)ft_memalloc(sizeof(t_plain))))
	{
		p->vecl = l;
		p->w = w;
		p->h = h;
		p->sx = DEFAULT_SCALE;
		p->sy = DEFAULT_SCALE;
		p->sz = DEFAULT_SCALE;
		p->px = DEFAULT_POSITION;
		p->py = DEFAULT_POSITION;
		p->rx = DEFAULT_X_ROTATE;
		p->ry = DEFAULT_Y_ROTATE;
		p->rz = DEFAULT_Z_ROTATE;
	}
	return (p);
}
