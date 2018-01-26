/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_plain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 17:55:47 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 19:48:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <stdio.h>

static void				print_data(t_list *elem)
{
	t_data				*data;

	data = (t_data*)elem->content;
	printf("point: (%.1f, %.1f, %.1f)\ncolor: %#x\n",
		   data->p->x,
		   data->p->x,
		   data->p->x,
		   data->color);
}

void					print_plain(t_plain *p)
{
	ft_lstiter(p->data_list, &print_data);
}
