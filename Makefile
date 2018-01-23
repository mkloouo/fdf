#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:34:22 by modnosum          #+#    #+#              #
#    Updated: 2018/01/23 20:51:03 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Library import
FT_PATH					:= ./libft
include $(FT_PATH)/libft.mk
include colors.mk

# Compiler Configuration
CC						= gcc
CFLAGS					= -Wall -Wextra -Werror -pedantic -std=c99\
						-fsanitize=address

# Directories
SRC_DIR					= ./src
OBJ_DIR					= ./obj
INC_DIR					= ./includes

# Adding current include
LIB_INC					+= -I $(INC_DIR) -I ./mlx
LIB_LINK				+= -lmlx -framework OpenGL -framework AppKit

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
norm: $(SRC) $(INC)
	@norminette $^

# Shortcuts
c: clean
f: fclean
n: norm

# Variable rules
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo $(call CARG1, $(BLUE), "[$(NAME)] Start compilation.")
$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(CFLAGS) $(LIB_INC)
	@echo $(call CARG2, $(BLUE), "[$(NAME)] Compiling: ", $(CYAN), $<)
$(NAME): $(OBJ) $(FT_PATH)/libft.a
	@$(CC) -o $@ $^ $(CFLAGS) $(LIB_INC) $(LIB_LINK)
	@echo $(call CARG1, $(BLUE), "[$(NAME)] Binary complete.")
