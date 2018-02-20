/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_plain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:46:22 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:14:04 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>

void					del_plain(t_plain **pp, char to_reverse)
{
	if (pp && *pp)
	{
		if (to_reverse)
			ft_lstrev(&((*pp)->vecl));
		ft_lstdel(&(*pp)->vecl, del_vec_el);
		ft_memdel((void**)pp);
	}
}
