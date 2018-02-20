/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 19:19:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>

int						get_color(char *color_line)
{
	char				*c_spec;

	if ((c_spec = ft_strchr(color_line, ',')))
		return (ft_atoi(c_spec + 1));
	return (0x00FFFFFF);
}
