
#ifndef DRAWING_H
# define DRAWING_H

#include <fdf.h>
#include <point.h>

void					put_pixel(int x, int y, int color, t_fdf *fdf);
void					draw_line(t_point *p1, t_point *p2, t_fdf *fdf);

#endif
