
#include <plain.h>
#include <fdf.h>
#include <stdio.h>

int						main(int ac, char **av)
{
	t_plain				*plain;
	t_fdf				*fdf;
	
	if (ac == 2)
	{
		plain = get_plain_from_file(av[1]);
		if (plain == NULL)
		{
			ft_putendl("Invalid plain");
			return (2);
		}
		fdf = get_fdf(plain);
		if (fdf == NULL)
		{
			perror("Error");
			return (3);
		}
		start_fdf(fdf);
		return (0);
	}
	ft_putendl("usage: fdf FILE_NAME");
	return (1);
}
