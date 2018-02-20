/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/20 22:48:37 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>

int						parse_color(char *data)
{
	char				*c;

	if ((c = ft_strchr(data, ',')))
		return (ft_atoi(c + 1));
	return (DEFAULT_COLOR);
}
