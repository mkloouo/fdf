#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:34:22 by modnosum          #+#    #+#              #
#    Updated: 2018/01/26 20:07:00 by modnosum         ###   ########.fr        #
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

# Source and object lists
SRCS					:= $(shell find $(SRC_DIR) -type f -name "*.c")
OBJS					:= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(SRCS:.c=.o))

# Add outside variables
FT_PATH					:= ./libft
include $(FT_PATH)/Libft.mk
include Mlx.mk

# Modify flags a bit
IFLAGS					+= -I $(INC_DIR)

# Phony rules
.PHONY: all clean fclean re c f

# Coloring
include Coloring.mk 

# Named rules
all: $(MLX_NAME) $(FT_NAME) $(NAME)
clean:
	@rm -fR $(OBJ_DIR)
	@rm -fR $(MLX_NAME)
	@rm -fR $(FT_NAME)
	$(call PRINT,$(MAGENTA),"Removed $(OBJ_DIR), $(MLX_NAME), $(FT_NAME).")
fclean: clean
	@rm -fR $(NAME)
	@$(MAKE) $(MFLAGS) $(FT_PATH) fclean
	@$(MAKE) $(MFLAGS) $(MLX_PATH) clean
	$(call PRINT,$(MAGENTA),"Removed $(NAME).")
re: fclean all

# Variable rules
$(NAME): $(OBJS)
	@$(CC) -o $@ $^ $(CFLAGS) $(IFLAGS) $(LFLAGS)
	$(call PRINT,$(GREEN),"Build $@.")
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(CFLAGS) $(IFLAGS)
	$(call PRINT,$(BLUE),"$< ->",$(GREEN),"$@")
$(OBJ_DIR):
	@mkdir -p $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(shell find $(SRC_DIR) -type d))
	$(call PRINT,$(BLUE),"Created $@ directory.")
$(FT_NAME): $(FT_DEP)
	@$(MAKE) -C $(FT_PATH)
	@cp $(FT_PATH)/$@ ./$@
$(MLX_NAME): $(MLX_DEP)
	@$(MAKE) $(MFLAGS) $(MLX_PATH)
	@cp $(MLX_PATH)/$@ ./$@

# Shortcuts
c: clean
f: fclean
