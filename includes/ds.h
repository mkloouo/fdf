
#ifndef DS_H
# define DS_H

# include <plain.h>
# include <image.h>

# define DEFAULT_WINDOW_WIDTH 800
# define DEFAULT_WINDOW_HEIGHT 600

# define MIN_WINDOW_WIDTH 800
# define MIN_WINDOW_HEIGHT 600

# define MAX_WINDOW_WIDTH 1920
# define MAX_WINDOW_HEIGHT 1080

typedef struct			s_ds
{
	void				*mlx;
	void				*window;
	int					width;
	int					height;
	char				*pn;
	t_image				*image;
	t_plain				*plain;
	int					step;
}						t_ds;

t_ds					*get_ds(t_plain *plain, char *program_name);
void					delete_ds(t_ds **dp);

void					init_hooks(t_ds *ds);
void					start_loop(t_ds *ds);

void					redraw(t_ds *ds, int x, int y);

#endif
