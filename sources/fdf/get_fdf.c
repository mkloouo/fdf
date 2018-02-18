
#include <fdf.h>
#include <libft.h>
#include <mlx.h>

t_fdf					*get_fdf(t_plain *plain)
{
	t_fdf				*f;

	if ((f = (t_fdf*)ft_memalloc(sizeof(t_fdf))))
	{
		f->mlx = mlx_init();
		f->plain = plain;
		f->window = mlx_new_window(f->mlx, 600, 600, "Title");
		f->image = mlx_new_image(f->mlx, 600, 600);
		f->image = mlx_get_data_addr(f->image, &f->bpp, &f->line_size, &f->endian);
	}
	return (f);
}
