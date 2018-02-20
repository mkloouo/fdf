
#include <image.h>
#include <mlx.h>
#include <stdio.h>
#include <math.h>

static t_point2			*convert_to_2d(t_point3 *c, t_plain *plain, int i, int j)
{
	float				rx;
	float				ry;
	float				rz;
	t_point3			d;
	t_point2			*p;

	rx = plain->rotx * (float)(M_PI / 180.0);
	ry = plain->roty * (float)(M_PI / 180.0);
	rz = plain->rotz * (float)(M_PI / 180.0);
	set_point3(&d, c->x + (j * plain->step),
			   c->y + (i * plain->step), c->z * plain->z_scale);
	p = get_point2((((d.x) * cos(ry) - (d.z * cos(rx) - d.y * sin(rx)) * sin(ry))
					* cos(rz) + (d.y * cos(rx) + d.z * sin(rx)) * sin(rz)),
				   (((d.y * cos(rx) + d.z * sin(rx))) * cos(rx) -
					((d.x) * cos(ry) - (d.z * cos(rx) - d.y * sin(rx)) *
					 sin(ry)) * sin(rz)), c->color);
	return (p);
}

static void				draw_links(t_image *image, t_plain *plain,
								   t_list *cur, t_point2 pos)
{
	t_point2			*mid;
	t_point2			*r;
	t_point2			*d;
	int					i;

	mid = NULL;
	r = NULL;
	d = NULL;
	if (!(pos.x == (plain->height - 1) && pos.y == (plain->width - 1)))
	{
		mid = convert_to_2d((t_point3*)cur->content, plain, pos.x, pos.y);
		if ((pos.y + 1) < (plain->width))
		{
			r = convert_to_2d((t_point3*)cur->next->content, plain, pos.x, pos.y + 1);
		}
		if ((pos.x + 1) < (plain->height))
		{
			i = 0;
			while (i++ < plain->width)
				cur = cur->next;
			d = convert_to_2d((t_point3*)cur->content, plain, pos.x + 1, pos.y);
		}
		set_point2(mid, mid->x + plain->mx, mid->y + plain->my);
		if (r)
		{
			set_point2(r, r->x + plain->mx, r->y + plain->my);
			draw_line(image, mid, r);
		}
		if (d)
		{
			set_point2(d, d->x + plain->mx, d->y + plain->my);
			draw_line(image, mid, d);
		}
		delete_point2(&mid);
		delete_point2(&r);
		delete_point2(&d);
	}
}

void					redraw_plain(t_plain *plain, t_image *image)
{
	t_list				*list;
	t_point2			p;
	int					i;
	int					j;

	i = 0;
	list = plain->points;
	while (i < plain->height)
	{
		j = 0;
		while (j < plain->width)
		{
			p.x = i;
			p.y = j;
			draw_links(image, plain, list, p);
			list = list->next;
			j++;
		}
		i++;
	}
}
