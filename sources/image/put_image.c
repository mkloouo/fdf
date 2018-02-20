
#include <image.h>
#include <mlx.h>

void					put_image(void *mlx, void *window, t_image *image,
									t_point2 pos)
{
	mlx_put_image_to_window(mlx, window, image->image, pos.x, pos.y);
}

