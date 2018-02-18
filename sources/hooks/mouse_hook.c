
#include <hooks.h>
#include <libft.h>
#include <drawing.h>

int						mouse_hook(int button, int x, int y, void *fdf)
{
	ft_putstr("Mouse Button: ");
	ft_putnbr(button);
	ft_putchar('\n');
	ft_putstr("X:");
	ft_putnbr(x);
	ft_putstr(" Y:");
	ft_putnbr(y);
	ft_putchar('\n');
	put_pixel(x, y, 0xFFFFFFFF, (t_fdf*)fdf);
	(void)fdf;
	return (0);
}
