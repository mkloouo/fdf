
#include <hooks.h>
#include <libft.h>
#include <image.h>
#include <fdf.h>
#include <mlx.h>

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
	unsigned int color = mlx_get_color_value(((t_fdf*)fdf)->mlx, 0x00FFFFFF);
	put_pixel(((t_fdf*)(fdf))->image, x, y, color);
	redraw((t_fdf*)fdf);
	return (0);
}
