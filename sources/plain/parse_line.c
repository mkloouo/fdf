/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:47 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 17:30:02 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <libft.h>
#include <vector.h>

static int				validate_length(char **data, t_plain *pln)
{
	int					len;

	len = 0;
	if (data == NULL)
		return (0);
	while (*data)
	{
		data++;
		len++;
	}
	if (pln->w == 0)
		pln->w = len;
	if (pln->w == 0 || pln->w != len)
		return (0);
	return (len);
}				

t_plain					*parse_line(t_plain *pln, char *line, int row)
{
	char				**data;
	int					len;
	int					i;

	if (!(data = (char**)ft_strsplit(line, ' ')))
		del_plain(&pln);
	i = 0;
	if (!(len = validate_length(data, pln)) ||
		!(pln->va[row] = (t_vec3f**)ft_memalloc(sizeof(t_vec3f*) * pln->w)) ||
		!(pln->ca[row] = (int*)ft_memalloc(sizeof(int) * pln->w)))
		del_plain(&pln);
	while (i < len)
	{
		if (!(pln->va[row][i] = get_vec3f(i, row, ft_atof(data[i]))))
		{
			del_plain(&pln);
			break ;
		}
		pln->ca[row][i] = parse_color(data[i]);
		i++;
	}
	ft_delsplit(&data);
	return (pln);
}
