/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pregerred_height.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 02:52:13 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/24 00:22:26 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>

int						get_preferred_height(t_plain *pln)
{
	int					h;

	h = pln->tr->scl->y * pln->h;
	return (h);
}
