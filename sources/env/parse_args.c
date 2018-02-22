/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 02:18:05 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 04:34:11 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <libft.h>

static void				scale_arg(t_vec3f *scl, int i, char **av)
{
	float				value;

	value = ft_atof(av[i]);
	scl->x = value;
	scl->y = value;
	scl->z = value;
}

int						parse_args(t_env *env, int ac, char **av)
{
	int					i;

	i = 1;
	while (i < ac)
	{
		if (ft_strlen(av[i]) == 2 && i < (ac - 1) && av[i][0] == '-')
		{
			if (av[i][1] == 's')
				scale_arg(env->pln->tr->scl, (i + 1), av);
			else if (av[i][1] == 'z')
				env->pln->tr->scl->z = ft_atof(av[i + 1]);
			else if (av[i][1] == 'w')
				env->w = ft_atoi(av[i + 1]);
			else if (av[i][1] == 'h')
				env->w = ft_atoi(av[i + 1]);
			i += 2;
			continue ;
		}
		return (0);
	}
	return (1);
}
