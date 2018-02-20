
#include <point.h>

void					delete_point3(t_point3 **pp)
{
	if (pp && *pp)
		ft_memdel((void**)pp);
}
