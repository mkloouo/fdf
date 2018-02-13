/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_plain_from_file.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 14:02:53 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 14:38:50 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

static char				**validate_data(t_plain *p, char *line)
{
	char				**data;
	int					len;

	if ((data = ft_strsplit(line, ' ')))
	{
		len = ft_arrlen(data, sizeof(char*));
		p->width = (p->width == 0) ? (len) : (p->width);
		if (len == 0 || p->width != len)
		{
			ft_arrdel((void**)&data, sizeof(char*));
			return (NULL);
		}
	}
	return (data);
}

static int				get_color(char *holder)
{
	int					color;
	char				*sign;

	if ((sign = ft_strchr(holder, ',')))
		color = ft_atoi(sign + 1);
	else
		color = DEFAULT_COLOR;
	return (color);
}

static void				add_data(t_plain *p, char **data)
{
	int					i;
	t_list				*e;

	i = 0;
	while (i < p->width)
	{
		if (!(e = ft_lstnew(NULL, 0)) ||
			!(e->content = (void*)get_point(i, p->height, ft_atof(data[i]), get_color(data[i]))))
			exit_malloc();
		ft_lstadd(&p->points, e);
		i++;
	}
}

t_plain					*read_plain_from_file(int fd)
{
	t_plain				*p;
	char				*line;
	char				**data;

	if ((p = get_plain(NULL, 0, 0)))
	{
		while (get_next_line(fd, &line) > 0)
		{
			if (!(data = validate_data(p, line)))
				break ;
			add_data(p, data);
		}
		ft_lstrev(&p->points);
		if (data == NULL)
			destroy_plain(&p);
	}
	return (p);
}
