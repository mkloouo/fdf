/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_plain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:41 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/05 16:08:21 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <libft.h>
#include <errno.h>

t_plain					*get_plain(char *file, int w, int h)
{
	t_plain				*pln;

	if ((pln = (t_plain*)ft_memalloc(sizeof(t_plain))))
	{
		if (h == 0 ||
			!(pln->va = (t_vec3f***)ft_memalloc(sizeof(t_plain**) * h)))
		{
			ft_memdel((void**)&pln);
			return (NULL);
		}
		pln->tr = get_transf(NULL, NULL, NULL);
		pln->w = w;
		pln->h = h;
		pln->file = file;
	}
	return (pln);
}
