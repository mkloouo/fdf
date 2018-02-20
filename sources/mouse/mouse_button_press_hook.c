
#include <mouse.h>
#include <stdio.h>

int						mouse_button_press_hook(int button, int x, int y,
												t_ds *ds)
{
	printf("mouse button press button: %d at %dX%d\n", button, x, y);
	(void)ds;
	return (0);
}
