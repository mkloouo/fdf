#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Mlx.mk                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/26 15:38:12 by modnosum          #+#    #+#              #
#    Updated: 2018/01/26 20:06:55 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Variables for mlx library compilation

UNAME					?= $(shell uname)

MLX_NAME				:= libmlx.a

MLX_L					:=
MLX_I					:= 

ifeq ($(UNAME),Darwin)
	MLX_PATH				= ./mlx_macos
	MLX_L					:= -framework OpenGL -framework AppKit
else
	MLX_PATH				= ./mlx_other
	MLX_L					:= -l Xext -l X11	
endif

MLX_I					:= -I $(MLX_PATH)
MLX_L					:= -L $(MLX_PATH) -l mlx

MLX_DEP					:= $(shell find $(MLX_PATH) -type f -name "*.c" -o \
							-name "*.h")

ifndef LFLAGS
	LFLAGS					:=
	IFLAGS					:=
endif

LFLAGS					+= $(MLX_L)
IFLAGS					+= $(MLX_I)
