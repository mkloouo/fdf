/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redraw_plain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:29:45 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 18:05:56 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>

static t_vec2			***init_vec2_data(t_plain *pln)
{
	t_vec2				***arr;
	t_list				*l;
	int					i;
	int					j;

	i = 0;
	l = pln->vecl;
	if ((arr = (t_vec2***)ft_memalloc(sizeof(t_vec2**) * pln->h)))
		while (i < pln->h)
		{
			j = 0;
			if ((arr[i] = (t_vec2**)ft_memalloc(sizeof(t_vec2*) * pln->w)))
				while (j < pln->w)
				{
					arr[i][j] = perspective_3d_to_2d((t_vec3*)l->content, pln, i, j);
					set_vec2(arr[i][j], arr[i][j]->x + pln->px,
							 arr[i][j]->y + pln->py);
					l = l->next;
					j++;
				}
			i++;
		}
	return (arr);
}

static void				del_vec2_data(t_vec2 ****ap, t_plain *pln)
{
	int					i;
	int					j;

	i = 0;
	while (i < pln->h)
	{
		j = 0;
		while (j < pln->w)
		{
			del_vec2((*(*ap + i) + j));
			j++;
		}
		ft_memdel((void**)(*ap + i));
		i++;
	}
	ft_memdel((void**)ap);
}

static int				is_valid_line(t_image *img, t_vec2 *p1, t_vec2 *p2)
{
	return (IN_IMAGE(img, p1) || IN_IMAGE(img, p2));
}

void					put_plain_to_image(t_plain *pln, t_image *img)
{
	t_vec2				***arr;
	int					i;
	int					j;

	arr = init_vec2_data(pln);
	i = 0;
	while (i < pln->h)
	{
		j = 0;
		while (j < pln->w)
		{
			if (j < pln->w - 1 && is_valid_line(img, arr[i][j], arr[i][j + 1]))
				draw_line(img, arr[i][j], arr[i][j + 1]);
			if (i < pln->h - 1 && j < pln->w - 1)
				if (is_valid_line(img, arr[i][j], arr[i + 1][j + 1]))
					draw_line(img, arr[i][j], arr[i + 1][j + 1]);
			if (i < pln->h - 1 && is_valid_line(img, arr[i][j], arr[i + 1][j]))
				draw_line(img, arr[i][j], arr[i + 1][j]);
			j++;
		}
		i++;
	}
	del_vec2_data(&arr, pln);
}
