
#include <plain.h>
#include <stdio.h>

int						main(int ac, char **av)
{
    t_plain				*plain;

	if (ac > 1)
	{
		plain = get_plain_from_file(av[1]);
		if (plain == NULL)
			printf("Incorrect plain\n");
		else
		{
			printf("Correct plain:\n");
			print_plain(plain);
		}
		delete_plain(&plain, 0);
	}
    return (0);
}


