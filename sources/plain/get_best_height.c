
#include <plain.h>
#include <ds.h>

int						get_best_height(t_plain *plain)
{
	int					height;

	height = plain->step * plain->height;
	if (height > DEFAULT_WINDOW_HEIGHT || height < MIN_WINDOW_HEIGHT)
		return (DEFAULT_WINDOW_HEIGHT);	
	return (height);

}
