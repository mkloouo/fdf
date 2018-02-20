/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:29 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:52:18 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <math.h>

/* static void				init_data(int *data, t_vec2 *v1, t_vec2 *v2) */
/* { */
/* 	int					swap; */

/* 	data[0] = fabs(v2->x - v1->x); */
/* 	data[1] = fabs(v2->y - v1->y); */
/* 	data[2] = (v2->x >= v1->x) ? (1) : (-1); */
/* 	data[3] = (v2->y >= v1->y) ? (1) : (-1); */
/* 	swap = (data[1] <= data[0]); */
/* 	data[5] = (data[((swap) ? (1) : (0))] << 1); */
/* 	data[4] = data[5] - data[((swap) ? (0) : (1))]; */
/* 	data[6]	= ((swap) */
/* 				? (data[1] - data[0]) */
/* 				: (data[1] - data[0])) << 1; */
/* 	if (!swap) */
/* 	{ */
/* 		ft_swap((data), (data + 1)); */
/* 		ft_swap((data + 2), (data + 3)); */
/* 	} */
/* 	data[7] = ((swap) ? (v1->x) : v1->y) + data[2]; */
/* 	data[8] = (swap) ? (v1->y) : (v1->x); */
/* 	data[9] = 1; */
/* } */

/* void					draw_line(t_image *img, t_vec2 *v1, t_vec2 *v2) */
/* { */
/* 	int					data[10]; */
/* 	t_vec2				v; */

/* 	init_data(data, v1, v2); */
/* 	put_pixel(img, v1); */
/* 	while (data[9] <= data[0]) */
/* 	{ */
/* 		if (data[4] > 0) */
/* 		{ */
/* 			data[4] += data[6]; */
/* 			data[8] += data[3]; */
/* 		} */
/* 		else */
/* 			data[4] += data[5]; */
/* 		v.x = data[7]; */
/* 		v.y = data[8]; */
/* 		v.c = map_color(v1->c, v2->c, ((float)data[9] / data[0])); */
/* 		put_pixel(img, &v); */
/* 		data[9]++; */
/* 		data[7] += data[2]; */
/* 	} */
/* } */

void draw_line(t_image *img, t_vec2 *v1, t_vec2 *v2)
{
  int dx = fabs(v2->x - v1->x);
  int dy = fabs(v2->y - v1->y);
  int sx = v2->x >= v1->x ? 1 : -1;
  int sy = v2->y >= v1->y ? 1 : -1;
  t_vec2			v;
  
  if (dy <= dx)
  {
    int d = (dy << 1) - dx;
    int d1 = dy << 1;
    int d2 = (dy - dx) << 1;
   put_pixel(img, v1);
    for(int x = v1->x + sx, y = v1->y, i = 1; i <= dx; i++, x += sx)
    {
      if ( d >0)
      {
        d += d2;
        y += sy;
      }
      else
        d += d1;
	  v.x = x;
	  v.y = y;
	  v.c = map_color(v1->c, v2->c, ((float)i / dx));
     put_pixel(img, &v);
    }
  }
  else
  {
    int d = (dx << 1) - dy;
    int d1 = dx << 1;
    int d2 = (dx - dy) << 1;
   put_pixel(img, v1);
    for(int y = v1->y + sy, x = v1->x, i = 1; i <= dy; i++, y += sy)
    {
      if ( d >0)
      {
        d += d2;
        x += sx;
      }
      else
        d += d1;
	  	  v.x = x;
	  v.y = y;
	  v.c = map_color(v1->c, v2->c, ((float)i / dx));
     put_pixel(img, &v);
    }
  }
}
