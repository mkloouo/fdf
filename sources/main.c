/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:10:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/26 21:40:51 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <libft.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

static void				exit_error(char *name, char *msg)
{
	if (msg && errno == 2)
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

	if (ac == 2)
	{
		pln = plain_parse_file(av[1]);
		if (pln == NULL)
			exit_error(av[0], "Invalid map");
		env = init_env(pln, av[0]);
		if (env == NULL)
		{
			del_plain(&pln, pln->h, pln->w);
			exit_error(av[0], NULL);
		}
		start_env(env);
		return (0);
	}
	else
	{
		ft_putstr("usage: ");
		ft_putstr(av[0]);
		ft_putendl(" <map-file>");
	}
	return (1);
}
