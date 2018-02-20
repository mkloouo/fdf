
#include <keyboard.h>
#include <plain.h>
#include <stdio.h>
#include <stdlib.h>

int						key_release_hook(int button, t_ds *ds)
{
	printf("keyboard button released: %d\n", button);
//	handle_key(button, ds);
	(void)ds;
	return (0);
}
