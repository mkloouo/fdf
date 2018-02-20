
#include <point.h>

t_point2				*get_point2(float x, float y, int color)
{
	t_point2			*p;

	if ((p = (t_point2*)ft_memalloc(sizeof(t_point2))))
	{
		p->x = x;
		p->y = y;
		p->color = color;
	}
	return (p);
}
