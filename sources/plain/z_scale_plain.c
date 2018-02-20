
#include <plain.h>
#include <keyboard.h>

void					z_scale_plain(t_plain *plain, int button)
{
	if (Z_SCALE_P(button))
		plain->z_scale += 1;
	else if (Z_SCALE_M(button))
		plain->z_scale -= 1;
}
