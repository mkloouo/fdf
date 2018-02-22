/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redraw_plain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:29:45 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 03:13:14 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <libft.h>

static t_vec2i			***init_vec2i_data(t_plain *pln)
{
	t_vec2i				***arr;
	int					i;
	int					j;

	i = 0;
	if ((arr = (t_vec2i***)ft_memalloc(sizeof(t_vec2i**) * pln->h)))
		while (i < pln->h)
		{
			j = 0;
			if ((arr[i] = (t_vec2i**)ft_memalloc(sizeof(t_vec2i*) * pln->w)))
				while (j < pln->w)
				{
					arr[i][j] = perspective_3d_to_2d(pln->va[i][j], pln->tr, i, j);
					set_vec2i(arr[i][j], arr[i][j]->x + pln->tr->pos->x,
							 arr[i][j]->y + pln->tr->pos->y);
					j++;
				}
			i++;
		}
	return (arr);
}

static void				del_vec2i_data(t_vec2i ****ap, t_plain *pln)
{
	int					i;
	int					j;

	i = 0;
	while (i < pln->h)
	{
		j = 0;
		while (j < pln->w)
		{
			del_vec2i((*(*ap + i) + j));
			j++;
		}
		ft_memdel((void**)(*ap + i));
		i++;
	}
	ft_memdel((void**)ap);
}

static int				is_valid_line(t_image *img, t_vec2i *p1, t_vec2i *p2)
{
	return (IN_IMAGE(p1, img->w, img->h) || IN_IMAGE(p2, img->w, img->h));
}

void					put_plain_to_image(t_plain *pln, t_image *img)
{
	t_vec2i				***arr;
	int					i;
	int					j;
	t_vec2i				c;

	arr = init_vec2i_data(pln);
	i = 0;
	while (i < pln->h)
	{
		j = 0;
		while (j < pln->w)
		{
			if (j < pln->w - 1 && is_valid_line(img, arr[i][j], arr[i][j + 1]))
			{
				set_vec2i(&c, pln->ca[i][j],  pln->ca[i][j + 1]);
				draw_line(img, arr[i][j], arr[i][j + 1], &c);
			}
			if (i < pln->h - 1 && j < pln->w - 1)
				if (is_valid_line(img, arr[i][j], arr[i + 1][j + 1]))
				{
					set_vec2i(&c, pln->ca[i][j],  pln->ca[i + 1][j + 1]);
					draw_line(img, arr[i][j], arr[i + 1][j + 1], &c);
				}
			if (i < pln->h - 1 && is_valid_line(img, arr[i][j], arr[i + 1][j]))
			{
				set_vec2i(&c, pln->ca[i][j],  pln->ca[i + 1][j]);
				draw_line(img, arr[i][j], arr[i + 1][j], &c);
			}
			j++;
		}
		i++;
	}
	del_vec2i_data(&arr, pln);
}
