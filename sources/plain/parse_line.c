/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:47 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/25 19:39:14 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <libft.h>
#include <vector.h>

static void				skip_char(char **str, char c, int not)
{
	while (**str && ((not) ? (**str != c) : (**str == c)))
		(*str)++;
}

static int				validate_length(char *line, t_plain *pln)
{
	int					len;

	len = 0;
	if (line == NULL)
		return (0);
	while (*line)
	{
		skip_char(&line, ' ', 0);
		if (*line)
		{
			len++;
			skip_char(&line, ' ', 1);
		}
	}
	if (pln->w == 0)
		pln->w = len;
	if (pln->w == 0 || pln->w != len)
		return (0);
	return (len);
}

t_plain					*parse_line(t_plain *pln, char *line, int row)
{
	int					len;
	int					i;

	i = 0;
	if (!(len = validate_length(line, pln)) ||
		!(pln->va[row] = (t_vec3f**)ft_memalloc(sizeof(t_vec3f*) * pln->w)))
		del_plain(&pln);
	while (i < len)
	{
		skip_char(&line, ' ', 0);
		if (!(pln->va[row][i] = get_vec3f(i, row, ft_atof(line))))
		{
			del_plain(&pln);
			break ;
		}
		pln->va[row][i++]->v = parse_color(line);
		skip_char(&line, ' ', 1);
	}
	return (pln);
}
