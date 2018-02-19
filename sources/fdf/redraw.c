
#include <fdf.h>
#include <mlx.h>

void					redraw(t_fdf *fdf)
{
	if (fdf)
		mlx_put_image_to_window(fdf->mlx, fdf->window, fdf->image->image,
								0, 0);
}
