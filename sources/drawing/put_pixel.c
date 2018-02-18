
#include <drawing.h>

void					put_pixel(int x, int y, int color, t_fdf *fdf)
{
	((int*)fdf->image_data)[(fdf->line_size * y) + x] = (int)(color / fdf->bpp);
}
