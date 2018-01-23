/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_plain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 22:19:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/23 15:16:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void				del_list_elem(void *content, size_t size)
{
	if (content)
	{
		ft_bzero(content, size);
		ft_memdel(&content);
	}
}

void					delete_plain(t_plain **pp)
{
	if (pp)
	{
		ft_lstdel(&((*pp)->points), del_list_elem);
		ft_memdel((void**)pp);
	}
}
