
#include <fdf.h>
#include <mlx.h>
#include <hooks.h>

void					start_fdf(t_fdf *fdf)
{
	mlx_key_hook(fdf->window, &keyboard_hook, fdf);
	mlx_mouse_hook(fdf->window, &mouse_hook, fdf);
	mlx_loop(fdf->mlx);
}
