#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:34:22 by modnosum          #+#    #+#              #
#    Updated: 2018/01/24 22:04:05 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Compiler Configuration
CC						= gcc
CFLAGS					= -Wall -Wextra -Werror -pedantic -fsanitize=address

# Make Flags
MFLAGS					= --no-print-directory -C

# Target binary name
NAME					:= fdf

# Directories
SRC_DIR					= ./sources
OBJ_DIR					= ./objects
INC_DIR					= ./includes

# Dependencies
FT_PATH					:= ./libft
include $(FT_PATH)/Libft.mk
include $(FT_PATH)/Coloring.mk
ifeq ($(UNAME),Linux)
	MLX_PATH				:= ./mlx
else ifeq ($(UNAME),Darwin)
	MLX_PATH				:= ./mlx_sierra
endif
MLX						:= libmlx.a

# Include and Linkage Flags
IFLAGS					+= -I $(INC_DIR) -I $(MLX_PATH)
LFLAGS					+= -L $(MLX_PATH) -l mlx \
ifeq ($(UNAME),Linux)
							-l Xext -l X11
else ifeq ($(UNAME),Darwin)
							-framework OpenGL -framework AppKit
endif

# Source and object lists
SRCS					:= $(shell find $(SRC_DIR) -type f -name "*.c")
OBJS					:= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(SRC:.c=.o))

# Phony rules
.PHONY: all clean fclean re c f

# Named rules
all: $(MLX) $(FT_NAME) $(NAME)
clean:
	@$(MAKE) $()
fclean: clean
	@rm -fR $(NAME)
	@echo $(call CARG1, $(RED), "[$(NAME)] delete binary.")
	@$(MAKE) -C $(FT_PATH) fclean
re:
	@$(MAKE) -C $(FT_PATH) fclean --no-print-directory
	@$(MAKE) fclean  --no-print-directory
	@$(MAKE) all  --no-print-directory
norm: $(SRC) $(IpNC)
	@norminette $^

# Shortcuts
c: clean
f: fclean
n: norm

# Variable rules

$(NAME): $(FT_NAME) $(MLX_NAME) $(OBJ)
	@$(CC) -o $@ $^ $(CFLAGS) $(LIB_INC) $(LIB_LINK)
	@echo $(call CARG1, $(BLUE), "[$(NAME)] Binary complete.")

$(FT_NAME):
	@$(MAKE) -C $(FT_PATH)

$(MLX_NAME):
	@$(MAKE) -C $(MLX_PATH)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo $(call CARG1, $(BLUE), "[$(NAME)] Start compilation.")
$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(CFLAGS) $(LIB_INC)
	@echo $(call CARG2, $(BLUE), "[$(NAME)] Compiling: ", $(CYAN), $<)
