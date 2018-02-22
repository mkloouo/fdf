/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_preferred_width.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 02:47:31 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 02:52:00 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>

int						get_preferred_width(t_plain *pln)
{
	int					w;

	w = pln->tr->scl->x * pln->w;
	return (w);
}
