/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_plain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 17:12:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 19:29:27 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <ft.h>

t_plain					*init_plain(t_list *data_list, size_t width, size_t height)
{
	t_plain				*p;

	if ((p = (t_plain*)ft_memalloc(sizeof(t_plain))))
	{
		p->data_list = data_list;
		p->width = width;
		p->height = height;
	}
	return (p);
}
