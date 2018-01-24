/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_plain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 20:07:41 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/23 19:25:53 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void				handle_color(t_point *point, char *color)
{
	if (color)
		point->color = ft_atoi(++color);
	else
		point->color = 0;
}

static int				updated_plain(t_plain *plain, char **data)
{
	t_point				*p;
	size_t				i;
	size_t				data_width;

	if (data && (p = (t_point*)ft_memalloc(sizeof(t_point))))
	{
		data_width = (int)ft_arrlen(data, sizeof(char*));
		plain->width = (plain->width) ? (plain->width) : (data_width);
		if (data_width == plain->width)
		{
			i = 0;
			while (data[i])
			{
				p->x = (double)i;
				p->y = (double)(plain->height);
				p->z = (double)ft_atof(data[i]);
				ft_lstadd(&plain->points, ft_lstnew(p, sizeof(t_point)));
				handle_color((t_point*)(plain->points->content),
							ft_strchr(data[i++], ','));
			}
			plain->height++;
			return (1);
		}
	}
	return (0);
}

t_plain					*get_plain(int fd)
{
	t_plain				*p;
	char				**data;
	char				*line;
	int					s;

	if ((p = (t_plain*)ft_memalloc(sizeof(t_plain))))
	{
		p->points = NULL;
		p->height = 0;
		p->width = 0;
		while ((s = get_next_line(fd, &line)) > 0)
		{
			if (!(updated_plain(p, (data = ft_strsplit(line, ' ')))))
				break ;
			ft_memdel((void*)&data);
		}
		if (s == -1)
			delete_plain(&p);
		else if (p)
			ft_lstrev(&p->points);
	}
	return (p);
}
