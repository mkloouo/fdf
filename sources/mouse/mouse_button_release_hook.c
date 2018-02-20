
#include <mouse.h>
#include <stdio.h>

int						mouse_button_release_hook(int button, int x, int y,
												t_ds *ds)
{
	printf("mouse button release button: %d at %dX%d\n", button, x, y);
	(void)ds;
	return (0);
}
