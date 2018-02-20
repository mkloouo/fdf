
#include <plain.h>
#include <keyboard.h>

void					rotate_plain(t_plain *plain, int button)
{
	if (ROTATE_X(button))
		plain->rotx += ROTATE_X_P(button) ? 1 : -1;
	else if (ROTATE_Y(button))
		plain->roty += ROTATE_Y_P(button) ? 1 : -1;
	else if (ROTATE_Z(button))
		plain->rotz += ROTATE_Z_P(button) ? 1 : -1;
}
