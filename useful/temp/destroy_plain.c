/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_plain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 12:31:32 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 13:24:19 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

void					destroy_plain(t_plain **pp)
{
	if (pp)
		ft_lstdel(&(*pp)->points, destroy_point);
	ft_memdel((void**)pp);
}
