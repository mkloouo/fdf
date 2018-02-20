/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redraw_plain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:29:45 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:56:19 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <math.h>

static void				init_data(float *data, t_plain *pln)
{
	data[0] = pln->rx * (float)(M_PI / 180.0);
	data[1] = pln->ry * (float)(M_PI / 180.0);
	data[2] = pln->rz * (float)(M_PI / 180.0);
}

static t_vec2			*perspective_3d_to_2d(t_vec3 *v, t_plain *pln,
											  int i,
											  int j)
{
	t_vec2				*p;
	float				data[5];

	init_data(data, pln);
	data[3] = v->x + (i * pln->sx);
	data[4] = v->y + (j * pln->sy);
	data[5] = v->z * pln->sz;
	p = get_vec2(((data[3] * cos(data[1]) - (data[5] * cos(data[0]) - data[4] *
		sin(data[0])) * sin(data[1])) * cos(data[2]) + (data[4] * cos(data[0]) +
		data[5] * sin(data[0])) * sin(data[2])), (((data[4] * cos(data[0]) +
		data[5] * sin(data[0]))) * cos(data[0]) - (data[3] * cos(data[1]) -
		(data[5] * cos(data[0]) - data[4] * sin(data[0])) * sin(data[1])) *
		sin(data[2])), v->c);
	return (p);
} 
static void				draw_links(t_image *img, t_plain *pln,
								   t_list *cur, t_vec2 id)
{
	t_vec2				*mid;
	t_vec2				*r;
	t_vec2				*d;
	int					i;

	mid = NULL;
	r = NULL;
	d = NULL;
	if (!(id.x == (pln->h - 1) && id.y == (pln->w - 1)))
	{
		mid = perspective_3d_to_2d((t_vec3*)cur->content, pln, id.x, id.y);
		set_vec2(mid, mid->x  + pln->px , mid->y  + pln->py );
		if ((id.y + 1) < (pln->w))
		{
			r = perspective_3d_to_2d((t_vec3*)cur->next->content,
									 pln, id.x, id.y + 1);
			set_vec2(r, r->x + pln->px, r->y + pln->py);
			draw_line(img, mid, r);
		}
		if ((id.x + 1) < (pln->h))
		{
			i = 0;
			while (i++ < pln->w)
				cur = cur->next;
			d = perspective_3d_to_2d((t_vec3*)cur->content, pln, id.x + 1, id.y);
			set_vec2(d, d->x + pln->px, d->y + pln->py);
			draw_line(img, mid, d);
		}
		del_vec2(&mid);
		del_vec2(&r);
		del_vec2(&d);
	}
}

void					put_plain_to_image(t_plain *pln, t_image *img)
{
	t_list				*l;
	t_vec2				p;
	int					i;
	int					j;

	i = 0;
	l = pln->vecl;
	while (i < pln->h)
	{
		j = 0;
		while (j < pln->w)
		{
			p.x = i;
			p.y = j;
			draw_links(img, pln, l, p);
			l = l->next;
			j++;
		}
		i++;
	}
}
