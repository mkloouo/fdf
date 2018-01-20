#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:34:22 by modnosum          #+#    #+#              #
#    Updated: 2018/01/20 21:25:47 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Library import
FT_PATH					:= ./libft
include $(FT_PATH)/libft.mk
include colors.mk

# Compiler Configuration
CC						= gcc
CFLAGS					= -Wall -Wextra -Werror -pedantic -std=c99

CLIBFLAGS				= $(LIB_LK) $(LIB_INC) -I $(INC_DIR)
CFLAGS					+= $(CLIBFLAGS)

# Directories
SRC_DIR					= ./src
OBJ_DIR					= ./obj
INC_DIR					= ./includes

# Target binary name
NAME					:= fdf

# Source and object lists
SRC						:= $(shell find $(SRC_DIR) -type f -name "*.c")
OBJ						:= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(SRC:.c=.o))
INC						:= $(shell find $(INC_DIR) -type f -name "*.h")

# Phony rules
.PHONY: all clean fclean re norm

# Named rules
all:
	@$(MAKE) -C $(FT_PATH) all --no-print-directory
	@$(MAKE) $(NAME)  --no-print-directory
clean:
	@rm -fR $(OBJ_DIR)
	@echo -e $(call CARG1, $(RED), "[$(NAME)] delete obj directory.")
fclean: clean
	@rm -fR $(NAME)
	@echo -e $(call CARG1, $(RED), "[$(NAME)] delete binary.")
re:
	@$(MAKE) -C $(FT_PATH) fclean --no-print-directory
	@$(MAKE) fclean  --no-print-directory
	@$(MAKE) all  --no-print-directory
norm: $(SRC) $(INC)
	@norminette $^

# Variable rules
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo -e $(call CARG1, $(MAGENTA), "[$(NAME)] Start compilation.")
$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(CFLAGS)
	@echo -e $(call CARG2, $(MAGENTA), "[$(NAME)] Compiling: ", $(CYAN), $<)
$(NAME): $(OBJ)
	@$(CC) -o $@ $^ $(CFLAGS)
	@echo -e $(call CARG1, $(MAGENTA), "[$(NAME)] Binary complete.")
