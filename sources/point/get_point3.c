
#include <point.h>

t_point3				*get_point3(float x, float y, float z, int color)
{
	t_point3				*p;

	if ((p = (t_point3*)ft_memalloc(sizeof(t_point3))))
	{
		p->x = x;
		p->y = y;
		p->z = z;
		p->color = color;
	}
	return (p);
}
