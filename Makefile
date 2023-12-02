# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 19:23:02 by ael-mank          #+#    #+#              #
#    Updated: 2023/12/02 19:38:57 by ael-mank         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
INCLUDE		= include
SRC_DIR		= src/
OBJ_DIR		= obj/
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -I$(INCLUDE)
RM			= rm -f
AR			= ar rcs

GREEN=\033[0;32m
YELLOW=\033[0;33m
BLUE=\033[0;34m
MAGENTA=\033[0;35m
NC=\033[0m

# Sources

SRC_FILES = ft_atoi ft_isalnum ft_isdigit ft_memchr ft_memmove \
				ft_putendl_fd ft_split  ft_striteri ft_strlcpy \
				ft_strncmp ft_strtrim ft_toupper ft_bzero  ft_isalpha \
				ft_isprint ft_memcmp ft_memset ft_putnbr_fd ft_strchr \
				ft_strjoin ft_strlen ft_strnstr ft_substr ft_calloc \
				ft_isascii ft_itoa ft_memcpy ft_putchar_fd ft_putstr_fd \
				ft_strdup ft_strlcat ft_strmapi ft_strrchr ft_tolower
				
BONUS = ft_lstnew ft_lstadd_front ft_lstadd_back ft_lstsize ft_lstlast \
		ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

SRC 		= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

SRC_B 		= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ_B		= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(BONUS)))

# Rules

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "$(GREEN)Compiled ✓ $(NAME)$(NC)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@echo "$(YELLOW)Compiling $<...$(NC)"
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ_B)
	@$(AR) $(NAME) $(OBJ_B)
	@echo "$(GREEN)Compiled $(NAME) bonus ✓$(NC)"

clean:
	@$(RM) -rf $(OBJ_DIR)
	@echo "$(MAGENTA)Cleaned object files ✓ $(NC)"

fclean: clean
	@$(RM) -f $(NAME)
	@echo "$(MAGENTA)Cleaned $(NAME) ✓ $(NC)"

re: fclean all
	@echo "$(BLUE)Cleaned and recompiled $(NAME) ✓ $(NC)"

.PHONY: all clean fclean re bonus