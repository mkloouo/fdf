
#include <ds.h>
#include <mlx.h>
#include <libft.h>

t_ds					*get_ds(t_plain *plain, char *program_name)
{
	t_ds				*ds;
	int					width;
	int					height;
	char				*temp;

	if ((ds = (t_ds*)ft_memalloc(sizeof(t_ds))))
	{
		temp = ft_strjoin("FdF: ", plain->file);
		ds->mlx = mlx_init();
		ds->plain = plain;
		ds->pn = program_name;
		width = get_best_width(plain);
		height = get_best_height(plain);
		plain->mx = width / 2;
		plain->my = height / 2;
		ds->width = width;
		ds->height = height;
		ds->window = mlx_new_window(ds->mlx, width, height, temp);
		ft_strdel(&temp);
		ds->image = get_image(ds->mlx, width, height);
	}
	return (ds);
}
