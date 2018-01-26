/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_plain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 18:29:02 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 20:02:16 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <ft.h>
#include <errno.h>

static void				handle_color(t_data *data, char *color)
{
	if (color)
		data->color = ft_atoi(++color);
	else
		data->color = 0;
}

static int				parse_line(char *data, t_plain *plain)
{
	char				**split;
	t_data				*d;
	size_t				len;
	size_t				i;

	if ((split = ft_strsplit(data, ' ')))
	{
		len = getlen(split, sizeof(char*));
		plain->width = (plain->width == 0) ? (len) : (plain->width);
		if (plain->width != len)
			return (0);
		if ((d = get_data(get_point3(0, 0, 0), 0)))
		{
			i = 0;
			while (i < len)
			{
				set_point3(d->p, i, plain->height, ft_atof(split[i]));
				handle_color(d, ft_strchr(split[i++], ','));
				ft_lstadd(&plain->data_list, ft_lstnew(d, sizeof(d) + sizeof(d->p)));
			}
			plain->height++;
			return (1);
		}
	}
	return (0);
}

t_plain					*get_plain(char *file)
{
	t_plain				*p;
	int					fd;
	int					r;
	char				*data;

	fd = open_file(file, FILE_READ);
	p = init_plain(NULL, 0, 0);
	while ((r = get_next_line(fd, &data)) > 0)
	{
		r = parse_line(data, p);
		ft_strdel(&data);
		if (r == 0)
		{
			r = -1;
			break ;
		}
	}
	if (r == 0)
		ft_lstrev(&p->data_list);
	else
		delete_plain(&p);
	return (p);
}
