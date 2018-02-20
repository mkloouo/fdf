
#include <image.h>
#include <mlx.h>
#include <stdio.h>
#include <math.h>

static t_point2			*convert_to_2d(t_point3 *c, t_plain *plain, int i, int j)
{
	float				x_rad;
	float				y_rad;
	float				z_rad;
	t_point3			p1;
	t_point2			*p;

	x_rad = plain->rotx * M_PI / 180.0;
	y_rad = plain->roty * M_PI / 180.0;
	z_rad = plain->rotz * M_PI / 180.0;
	p1.x = c->x + (j * plain->step) + plain->mx;
	p1.y = c->y + (i * plain->step) + plain->my;
	p1.z = c->z + plain->step;
	p = get_point2((p1.x * cos(y_rad) - p1.z * cos(x_rad) - p1.y *
		sin(x_rad) * sin(y_rad) * cos(z_rad) + p1.y *
		cos(x_rad) + p1.z * sin(x_rad) *
		sin(z_rad) * cos(z_rad) + p1.y *
		cos(x_rad) + p1.z * sin(x_rad) * sin(z_rad)),
				   (p1.y * cos(x_rad) + p1.z * sin(x_rad) *
		cos(z_rad) + p1.x * cos(y_rad) - p1.z *
		cos(x_rad) - p1.y * sin(x_rad) *
		sin(y_rad) * sin(z_rad)), c->color);
	return (p);
}

static void				draw_links(t_image *image, t_plain *plain,
								   t_list *cur, t_point2 pos)
{
	t_point2			*mid;
	t_point2			*r;
	t_point2			*d;

	mid = NULL;
	r = NULL;
	d = NULL;
	if (!(pos.x == (plain->height - 1) && pos.y == (plain->width - 1)))
	{
		mid = convert_to_2d((t_point3*)cur->content, plain, pos.x, pos.y);
		if ((pos.y + 1) < (plain->width))
			r = convert_to_2d((t_point3*)cur->content, plain, pos.x, pos.y + 1);
		if ((pos.x + 1) < (plain->height))
			d = convert_to_2d((t_point3*)cur->content, plain, pos.x + 1, pos.y);
		if (mid && r)
			draw_line(image, mid, r);
		if (mid && d)
			draw_line(image, mid, d);
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
