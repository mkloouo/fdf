
#include <ds.h>

void					redraw(t_ds *ds, int x, int y)
{
	t_point2			pos;

	pos.x = x;
	pos.y = y;
	delete_image(ds->mlx, &ds->image);
	ds->image = get_image(ds->mlx, ds->width, ds->height);
	redraw_plain(ds->plain, ds->image);
	put_image(ds->mlx, ds->window, ds->image, pos);
}
