#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Mlx.mk                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/26 15:38:12 by modnosum          #+#    #+#              #
#    Updated: 2018/02/13 11:04:03 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Variables for mlx library compilation

UNAME					?= $(shell uname)

MLX_NEED_COMPILE		= 1
MLX_NAME				:= libmlx.a

MLX_I					:= 
MLX_L					:= -l mlx

ifeq (Darwin,$(UNAME))
	MINOR_VERSION			:= $(shell sw_vers -productVersion | cut -d . -f 2)
	MLX_NEED_COMPILE		= $(shell echo "$(MINOR_VERSION) >= 13" | bc)
	ifeq (1,$(MLX_NEED_COMPILE))
		MLX_PATH				+= ./mlx_macos
	endif
	MLX_L					+= -framework OpenGL -framework AppKit
else
	MLX_PATH				+= ./mlx_other
	MLX_L					+= -l Xext -l X11	
endif

ifeq (1,$(MLX_NEED_COMPILE))
	MLX_I					+= -I $(MLX_PATH)
	MLX_L					+= -L $(MLX_PATH)
	MLX_DEP					:= $(shell find $(MLX_PATH) -type f -name "*.c" -o -name "*.h")
endif

ifndef LFLAGS
	LFLAGS					:=
	IFLAGS					:=
endif

LFLAGS					+= $(MLX_L)
IFLAGS					+= $(MLX_I)
