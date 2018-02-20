
#include <ds.h>
#include <mlx.h>

void					delete_ds(t_ds **dp)
{
	delete_plain(&(*dp)->plain, 0);
	delete_image((*dp)->mlx, &(*dp)->image);
	mlx_destroy_window((*dp)->mlx, (*dp)->window);
	ft_memdel((void**)dp);
}
