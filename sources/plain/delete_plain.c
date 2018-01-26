/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_plain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 22:19:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 19:25:29 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

static void				del_elem(void *content, size_t size)
{
	t_data				*data;

	if (content)
	{
		data = (t_data*)content;
		ft_memdel((void**)&data->p);
		ft_bzero(data, size);
		ft_memdel((void**)&data);
	}
}

void					delete_plain(t_plain **pp)
{
	if (pp)
	{
		ft_lstdel(&(*pp)->data_list, del_elem);
		ft_memdel((void**)pp);
	}
}
