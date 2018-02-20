
#include <image.h>
#include <mlx.h>

void					delete_image(void *mlx, t_image **ip)
{
	mlx_destroy_image(mlx, (*ip)->image);
	ft_memdel((void**)ip);
}
