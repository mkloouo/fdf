
#include <plain.h>
#include <keyboard.h>

void					zoom_plain(t_plain *plain, int button)
{
	if (ZOOM_IN(button))
		plain->step += 1;
	else if (ZOOM_OUT(button))
		plain->step -= 1;
}
