
#include <keyboard.h>
#include <plain.h>
#include <stdio.h>
#include <stdlib.h>

int						key_press_hook(int button, t_ds *ds)
{
	printf("keyboard button pressed: %d\n", button);
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
	printf("plain:\nwidth: %d\nheight: %d\nmx: %d\nmy: %d\nstep: %d\n",
		   ds->plain->width, ds->plain->height, ds->plain->mx,
		   ds->plain->my, ds->plain->step);
		printf("rotx: %d\nroty: %d\nrotz: %d\n",
		   ds->plain->rotx, ds->plain->roty, ds->plain->rotz);
	(void)ds;
	return (0);
}
