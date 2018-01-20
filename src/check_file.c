/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 18:36:42 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/20 19:01:11 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int						check_file(char *filename)
{
	int					fd;

	if ((fd = open(filename, O_RDONLY)) == -1)
	{
		ft_putendl_fd(strerror(errno), 2);
		exit(2);
	}
	return (fd);
}
