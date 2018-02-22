/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:10:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 04:34:14 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <libft.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

static int			validate_args(int ac, char *name)
{
	if (ac < 2 || ac > 10)
	{
		ft_putstr("usage: ");
		ft_putstr(name);
		ft_putendl((" [-s <step>] [-z <z-scale>] "
					"[-w <width>] [-h <height>] map-file"));
		return (0);
	}
	return (1);
}

static void				exit_error(char *name, char *msg)
{
	if (msg)
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

	if (validate_args(ac, av[0]))
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
		if (parse_args(env, ac - 1, av) == 0)
		{
			del_env(&env);
			exit_error(av[0], "Invalid argument");
		}
		start_env(env);
		return (0);
	}
	return (1);
}
