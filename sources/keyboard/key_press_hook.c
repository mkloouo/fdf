
#include <keyboard.h>
#include <plain.h>
#include <stdio.h>

int						key_press_hook(int button, t_ds *ds)
{
	printf("keyboard button pressed: %d\n", button);
	print_plain(ds->plain);
	handle_key(button, ds);
	return (0);
}
