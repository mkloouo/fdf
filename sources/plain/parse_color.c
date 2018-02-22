/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 00:37:47 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <libft.h>

int						parse_color(char *word)
{
	char				*c;

	if ((c = ft_strchr(word, ',')))
		return (ft_atoi(c + 1));
	return (DEFAULT_COLOR);
}
