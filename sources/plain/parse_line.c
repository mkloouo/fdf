/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:47 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/28 19:16:17 by modnosum         ###   ########.fr       */
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

static int				validate_length(char *line, t_plain *pln, int *i)
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
			if (*line)
				skip_char(&line, ' ', 1);
		}
	}
	if (pln->w == 0)
		pln->w = len;
	if (pln->w == 0 || pln->w != len)
		return (0);
	*i = 0;
	return (len);
}

t_plain					*parse_line(t_plain *pln, char *line, int row,
									int color)
{
	int					len;
	int					i;
	int					cent_x;
	int					cent_y;

	if (!(len = validate_length(line, pln, &i)) ||
		!(pln->va[row] = (t_vec3f**)ft_memalloc(sizeof(t_vec3f*) * pln->w)))
		del_plain(&pln, row, 0);
	else
	{
		cent_x = pln->w / 2;
		cent_y = pln->h / 2;
		while (i < len && *line && pln)
		{
			skip_char(&line, ' ', 0);
			if ((pln->va[row][i] = get_vec3f(i - cent_x,
				row - cent_y, ft_atof(line), parse_color(line, color))))
				skip_char(&line, ' ', 1);
			else
				del_plain(&pln, row, i);
			i++;
		}
	}
	return (pln);
}
