/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redraw_plain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:29:45 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/25 20:48:47 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <libft.h>

static t_vec3i			***init_vec3i_data(t_plain *pln)
{
	t_vec3i				***arr;
	int					i;
	int					j;

	i = 0;
	arr = (t_vec3i***)ft_memalloc(sizeof(t_vec3i**) * pln->h);
	while (i < pln->h)
	{
		j = 0;
		arr[i] = (t_vec3i**)ft_memalloc(sizeof(t_vec3i*) * pln->w);
		while (j < pln->w)
		{
			arr[i][j] = ortho_3d_to_2d(pln->va[i][j], pln);
			set_vec3i(arr[i][j], arr[i][j]->x + pln->tr->pos->x,
						arr[i][j]->y + pln->tr->pos->y, arr[i][j]->z);
			j++;
		}
		i++;
	}
	return (arr);
}

static void				del_vec3i_data(t_vec3i ****ap, t_plain *pln)
{
	int					i;
	int					j;

	i = 0;
	while (i < pln->h)
	{
		j = 0;
		while (j < pln->w)
		{
			del_vec3i((*(*ap + i) + j));
			j++;
		}
		ft_memdel((void**)(*ap + i));
		i++;
	}
	ft_memdel((void**)ap);
}

void					put_plain_to_image(t_plain *pln, t_image *img)
{
	t_vec3i				***arr;
	int					i;
	int					j;

	arr = init_vec3i_data(pln);
	if (pln->h == 1 && pln->w == 1)
		put_pixel(img, arr[0][0]);
	else
	{
		i = 0;
		while (i < pln->h)
		{
			j = 0;
			while (j < pln->w)
			{
				if (j < pln->w - 1)
					draw_line(img, arr[i][j], arr[i][j + 1]);
				if (i < pln->h - 1 && j < pln->w - 1)
					draw_line(img, arr[i][j], arr[i + 1][j + 1]);
				if (i < pln->h - 1)
					draw_line(img, arr[i][j], arr[i + 1][j]);
				j++;
			}
			i++;
		}
	}
	del_vec3i_data(&arr, pln);
}
