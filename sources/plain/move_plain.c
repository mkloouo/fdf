
#include <plain.h>
#include <keyboard.h>

void					move_plain(t_plain *plain, int button)
{
	if (MOVE_UP(button))
		plain->my -= 1;
	else if (MOVE_LEFT(button))
		plain->mx -= 1;
	else if (MOVE_DOWN(button))
		plain->my += 1;
	else if (MOVE_RIGHT(button))
		plain->mx += 1;
}
