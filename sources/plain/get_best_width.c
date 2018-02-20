
#include <plain.h>
#include <ds.h>

int						get_best_width(t_plain *plain)
{
	int					width;

	width = plain->step * plain->width;
	if (width > DEFAULT_WINDOW_WIDTH || width < MIN_WINDOW_WIDTH)
		return (DEFAULT_WINDOW_WIDTH);	
	return (width);
}
