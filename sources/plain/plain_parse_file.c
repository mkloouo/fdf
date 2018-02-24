/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plain_parse_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 23:40:26 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/24 00:16:50 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <libft.h>

static void				skip_invalid_file(int fd)
{
	char				*line;

	while (get_next_line(fd, &line) > 0)
		ft_strdel(&line);
}

t_plain					*plain_parse_file(char *file)
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
			if (!(pln = parse_line(pln, line, count++)))
				break ;
			ft_strdel(&line);
		}
		skip_invalid_file(fd);
		if (fd == -1 || r == -1)
			del_plain(&pln);
		else
			close_file(fd);
	}
	return (pln);
}
