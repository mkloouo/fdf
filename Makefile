#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:34:22 by modnosum          #+#    #+#              #
#    Updated: 2018/01/24 17:40:51 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Ft library import
FT_PATH					:= ./libft
include $(FT_PATH)/Libft.mk
include colors.mk

# Mlx library import
MLX_PATH				:= ./mlx
MLX_NAME				:= libmlx.a

# Compiler Configuration
CC						= gcc
CFLAGS					= -Wall -Wextra -Werror -pedantic -fsanitize=address

# Directories
SRC_DIR					= ./src
OBJ_DIR					= ./obj
INC_DIR					= ./includes

# Adding current include
LIB_INC					+= -I $(INC_DIR) -I $(MLX_PATH)
LIB_LINK				+= -L $(MLX_PATH) -l mlx -framework OpenGL -framework AppKit

# Target binary name
NAME					:= fdf

# Source and object lists
SRC						:= $(shell find $(SRC_DIR) -type f -name "*.c")
OBJ						:= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(SRC:.c=.o))
INC						:= $(shell find $(INC_DIR) -type f -name "*.h")

# Phony rules
.PHONY: all clean fclean re norm c f n

# Named rules
all:
	@echo Includes: [$(LIB_INC)]
	@echo Linkage: [$(LIB_LINK)]
	@$(MAKE) -C $(FT_PATH) all --no-print-directory
	@$(MAKE) $(NAME)  --no-print-directory
clean:
	@rm -fR $(OBJ_DIR)
	@echo $(call CARG1, $(RED), "[$(NAME)] delete obj directory.")
	@$(MAKE) -C $(FT_PATH) clean
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
