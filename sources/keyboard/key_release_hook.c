
#include <keyboard.h>
#include <plain.h>
#include <stdio.h>
#include <stdlib.h>

int						key_release_hook(int button, t_ds *ds)
{
	printf("keyboard button released: %d\n", button);
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
	(void)ds;
	return (0);
}
