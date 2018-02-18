
#include <hooks.h>
#include <keycodes.h>
#include <libft.h>
#include <stdlib.h>

int						keyboard_hook(int keycode, void *fdf)
{
	ft_putstr("Keyboard Keycode: ");
	ft_putnbr(keycode);
	ft_putchar('\n');
	if (keycode == ESC_KEYCODE || keycode == Q_KEYCODE)
		exit(1);
	(void)fdf;
	return (0);
}
