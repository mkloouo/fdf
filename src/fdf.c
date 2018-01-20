/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 18:34:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/20 19:58:40 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void				printmap(t_map *map)
{
	int					i;
	int					j;
	t_list				*cur;

	if (map)
	{
		printf("width: %d\n", map->width);
		printf("height: %d\n", map->height);
		printf("data:\n");
		i = 0;
		cur = map->vector_lst;
		while (cur)
		{
			j = 0;
			while (j < map->width)
			{
				printf("(%.1f, %.1f, %.1f) ", ((t_vec3*)(cur->content))[j].x,
					   ((t_vec3*)(cur->content))[j].y,
					   ((t_vec3*)(cur->content))[j].z);
				j++;
			}
			printf("\n");
			cur = cur->next;
			i++;
		}
	}
}

static int				count_width(char **arr)
{
	int					width;

	width = 0;
	while (arr[width])
		width++;
	return (width);
}

static void				del_elem(void *data, size_t size)
{
	ft_bzero(data, size);
	ft_memdel(&data);
}

static void				delete_map(t_map *map)
{
	if (map)
	{
		if (map->vector_lst)
			ft_lstdel(&map->vector_lst, del_elem);
		map->width = 0;
		map->height = 0;
		ft_memdel((void**)&map);
	}
}

static t_map			*newmap(t_list *vlist, int width, int height)
{
	t_map				*new;

	if ((new = ft_memalloc(sizeof(t_map))))
	{
		new->vector_lst = vlist;
		new->width = width;
		new->height = height;
	}
	return (new);
}

static t_vec3			*getarr(char **arr, int width, int height)
{
	t_vec3				*vec3arr;
	int					i;

	i = 0;
	vec3arr = ft_memalloc(sizeof(t_vec3) * width);
	while (arr[i])
	{
		vec3arr[i].x = (double)i;
		vec3arr[i].y = (double)(height - 1);
		vec3arr[i].z = (double)ft_atod(arr[i]);
		i++;
	}
	return (vec3arr);
}

static int				add_line(t_map **map, int fd, char *line)
{
	t_vec3				*vec3arr;
	char				**arr;
	int					ret;
	int					width;

	ret = get_next_line(fd, &line);
	if (ret > 0)
	{
		arr = ft_strsplit(line, ' ');
		width = count_width(arr);
		if (!*map)
			*map = newmap(NULL, width, 0);
		if (!((*map)->width != width && (ret = -1) == -1))
		{
			vec3arr = getarr(arr, width, ++(*map)->height);
			ft_lstadd(&(*map)->vector_lst,
					  ft_lstnew(vec3arr, sizeof(t_vec3) * width));
		}
	}
	if (ret == -1)
		delete_map(*map);
	return (ret > 0);
}

static t_map			*parse_data(int fd)
{
	t_map				*map;
	char				*line;

	map = NULL;
	line = NULL;
	while (add_line(&map, fd, line) > 0)
		;
	if (map)
		ft_lstrev(&map->vector_lst);
	printmap(map);
	return (map);
}
int						fdf(char *filename)
{
	t_map				*map;
	int					fd;

	fd = check_file(filename);
	printf("fd: %d\n", fd);
	if ((map = parse_data(fd)))
		(void)map;
//		printmap(map);
	return (3);
}
