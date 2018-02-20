/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_plain_from_file.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:44 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/20 22:54:39 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>

t_plain					*get_plain_from_file(char *file)
{
	t_plain				*pln;
	int					fd;

	if ((pln = get_plain(NULL, 0, 0)))
	{
		fd = open_file(file, FILE_READ);
		pln = parse_plain(pln, fd);
		if (pln != NULL && pln->vecl != NULL)
			ft_lstrev(&(pln->vecl));
		if (fd != -1)
			close_file(fd);
	}
	return (pln);
}
