/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:47 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:14:39 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <vector.h>

static int				get_len_and_validate(char **data, t_plain *pln)
{
	int					len;

	len = 0;
	if (data == NULL)
		return (-1);
	while (*data)
	{
		data++;
		len++;
	}
	if (pln->w == 0)
		pln->w = len;
	if (pln->w == 0 || pln->w != len)
		return (-1);
	return (len);
}

t_plain					*parse_line(t_plain *pln, char *line)
{
	char				**data;
	t_list				*el;
	int					i;
	int					len;

	len = get_len_and_validate(
		(data = ft_strsplit(line, ' ')), pln);
	if ((i = 0) == 0 && len == -1)
		del_plain(&pln, 1);
	while (data[i] && pln != NULL)
	{
		if (!(el = get_vec_el(i, pln->h, ft_atof(data[i]),
								parse_color(data[i]))))
			del_plain(&pln, 1);
		ft_lstadd(&pln->vecl, el);
		i++;
	}
	if (pln != NULL)
		pln->h++;
	ft_delsplit(&data);
	return (pln);
}
