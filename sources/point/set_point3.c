
#include <point.h>

void					set_point3(t_point3 *p, float x, float y, float z)
{
	if (p)
	{
		p->x = x;
		p->y = y;
		p->z = z;
	}
}
