
#include <keyboard.h>
#include <stdlib.h>
#include <plain.h>

void					handle_key(int button, t_ds *ds)
{
	if (QUIT_BUTTON(button))
	{
		delete_ds(&ds);
		exit(1);
	}
	else if (MOVE_BUTTON(button))
	{
		move_plain(ds->plain, button);
		redraw(ds, 0, 0);
	}
	else if (ZOOM_BUTTON(button))
	{
		zoom_plain(ds->plain, button);
		redraw(ds, 0, 0);
	}
	else if (ROTATE_BUTTON(button))
	{
		rotate_plain(ds->plain, button);
		redraw(ds, 0, 0);
	}
	else if (Z_SCALE(button))
	{
		z_scale_plain(ds->plain, button);
		redraw(ds, 0, 0);
	}
}
