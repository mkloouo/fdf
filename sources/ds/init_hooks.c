
#include <ds.h>
#include <mlx.h>
#include <keyboard.h>
#include <mouse.h>

void					init_hooks(t_ds *ds)
{
	mlx_hook(ds->window, KEY_PRESS, KEY_PRESS_MASK,
			 &key_press_hook, ds);
	mlx_hook(ds->window, KEY_RELEASE, KEY_RELEASE_MASK,
			 &key_release_hook, ds);
	mlx_hook(ds->window, MOUSE_BUTTON_PRESS, MOUSE_BUTTON_PRESS_MASK,
			 &mouse_button_press_hook, ds);
	mlx_hook(ds->window, MOUSE_BUTTON_RELEASE, MOUSE_BUTTON_RELEASE_MASK,
			 &mouse_button_release_hook, ds);
}
