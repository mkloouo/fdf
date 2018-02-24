/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:10:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/24 00:18:18 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <libft.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

static int				validate_args(int ac, char **av)
{
	int				i;

	if (ac >= 2 && ac <= 10 && ac % 2 == 0)
	{
		i = 1;
		while (i < (ac - 1))
		{
			if (!(ft_strlen(av[i]) == 2 && av[i][0] == '-' &&
					(av[i][1] == 's' || av[i][1] == 'z' || av[i][1] == 'w' ||
					av[i][1] == 'h')))
				return (0);
			i += 2;
		}
		return (1);
	}
	ft_putstr("usage: ");
	ft_putstr(av[0]);
	ft_putendl((" [-s <step>] [-z <z-scale>]\n"
				"[-w <width>] [-h <height>] map-file"));
	return (0);
}

static void				exit_error(char *name, char *msg)
{
	printf("errno: %d\n", errno);
	if (msg && errno <= 2)
	{
		ft_putstr(name);
		ft_putstr(": ");
		ft_putendl(msg);
	}
	else
		perror(name);
	exit(1);
}

int						main(int ac, char **av)
{
	t_plain				*pln;
	t_env				*env;

	if (validate_args(ac, av))
	{
		pln = plain_parse_file(av[ac - 1]);
		if (pln == NULL)
			exit_error(av[0], "Invalid map");
		env = init_env(pln, av[0]);
		if (env == NULL)
		{
			del_plain(&pln);
			exit_error(av[0], NULL);
		}
		parse_args(env, ac - 1, av);
		start_env(env);
		return (0);
	}
	return (1);
}
