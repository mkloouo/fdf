/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:20:50 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/24 00:09:08 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct			s_vec3d
{
	double				x;
	double				y;
	double				z;
}						t_vec3d;

typedef struct			s_vec2d
{
	double				x;
	double				y;
}						t_vec2d;

typedef struct			s_vec3f
{
	float				x;
	float				y;
	float				z;
	int					v;
}						t_vec3f;

typedef struct			s_vec2f
{
	float				x;
	float				y;
}						t_vec2f;

typedef struct			s_vec3i
{
	int					x;
	int					y;
	int					z;
}						t_vec3i;

typedef struct			s_vec2i
{
	int					x;
	int					y;
}						t_vec2i;

t_vec3f					*get_vec3f(float x, float y, float z);
void					set_vec3f(t_vec3f *v, float x, float y, float z);
void					del_vec3f(t_vec3f **vp);

void					print_vec3f(t_vec3f *v);

t_vec2i					*get_vec2i(int x, int y);
void					set_vec2i(t_vec2i *v, int x, int y);
void					del_vec2i(t_vec2i **vp);

void					print_vec2i(t_vec2i *v);

t_vec3i					*get_vec3i(int x, int y, int z);
void					set_vec3i(t_vec3i *v, int x, int y, int z);
void					del_vec3i(t_vec3i **vp);

void					print_vec3i(t_vec3i *v);

#endif
