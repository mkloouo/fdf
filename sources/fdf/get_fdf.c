
#include <fdf.h>
#include <mlx.h>

t_fdf					*get_fdf(t_plain *plain)
{
	t_fdf				*f;

	if ((f = (t_fdf*)ft_memalloc(sizeof(t_fdf))))
	{
		f->mlx = mlx_init();
		f->plain = plain;
		f->window = mlx_new_window(f->mlx, 600, 600, "Title");
		f->image = get_image(f->mlx, 600, 600);
	}
	return (f);
}
