/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plain_parse_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 23:40:26 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/05 16:05:13 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <libft.h>
#include <errno.h>

static void				skip_invalid_file(int fd)
{
	char				*line;

	while (get_next_line(fd, &line) > 0)
		ft_strdel(&line);
}

t_plain					*plain_parse_file(char *file, int color)
{
	t_plain				*pln;
	char				*line;
	int					fd;
	int					r;
	int					count;

	if ((pln = get_plain(file, 0, get_line_count(file))))
	{
		fd = open_file(file, FILE_READ);
		count = 0;
		while ((r = get_next_line(fd, &line)) > 0)
		{
			if (!(pln = parse_line(pln, line, count++, color)))
				break ;
			ft_strdel(&line);
		}
		skip_invalid_file(fd);
		if (fd == -1 || r == -1 || count == 0)
			del_plain(&pln, pln->h, pln->w);
		else if (!(errno = 0))
			close_file(fd);
	}
	return (pln);
}
