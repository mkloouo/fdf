/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 18:59:35 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 19:00:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <data.h>
# include <ft.h>

t_data					*get_data(t_point3 *p, int color)
{
	t_data				*d;

	if ((d = (t_data*)ft_memalloc(sizeof(t_data))))
	{
		d->p = p;
		d->color = color;
	}
	return (d);
}
