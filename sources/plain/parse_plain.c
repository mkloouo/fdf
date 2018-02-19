/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_plain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:50 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 18:57:50 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>
#include <stdio.h>

t_plain					*parse_plain(t_plain *plain, int fd)
{
	char				*line;
	int					rt;

	while ((rt = get_next_line(fd, &line)) > 0)
	{
		plain = parse_line(plain, line);
		ft_strdel(&line);
		if (plain == NULL)
			break ;
	}
	if (rt == 1)
		while (get_next_line(fd, &line) > 0)
			ft_strdel(&line);
	else if (rt == -1)
		delete_plain(&plain, 1);
	return (plain);
}
