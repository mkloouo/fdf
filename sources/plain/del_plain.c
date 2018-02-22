/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_plain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:46:22 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 04:29:10 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <libft.h>

void					del_plain(t_plain **pp)
{
	int					i;
	int					j;

	if (pp && *pp)
	{
		i = 0;
		while (i < (*pp)->h)
		{
			j = 0;
			while (j < (*pp)->w)
			{
				if ((*pp)->va[i][j] == NULL || (*pp)->ca[i] == NULL)
					break ;
				del_vec3f((((*pp)->va[i]) + j));
				j++;
			}
			ft_memdel((void**)((*pp)->va + i));
			i++;
		}
		del_transf(&(*pp)->tr);
		ft_memdel((void**)pp);
	}
}
