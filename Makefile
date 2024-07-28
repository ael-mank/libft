# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 19:23:02 by ael-mank          #+#    #+#              #
#    Updated: 2024/01/26 10:32:18 by ael-mank         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libft.a
PRINTF_NAME = ft_printf.a
INCLUDE     = include
SRC_DIR_PRINTF  = src/ft_printf/
OBJ_DIR 	   = obj/
SRC_DIR_LIB = src/libft/
OBJ_DIR_LIB = obj/libft/
OBJ_DIR_PRINT = obj/printf/
CC          = cc
CFLAGS      = -Wall -Werror -Wextra -I$(INCLUDE) -fPIE
DEBUG_FLAGS = -g
RM          = rm -f
AR          = ar rcs

GREEN=\033[0;32m
YELLOW=\033[0;33m
BLUE=\033[0;34m
MAGENTA=\033[0;35m
NC=\033[0m

# Sources Libft

SRC_FILES = ft_atoi ft_isalnum ft_isdigit ft_memchr ft_memmove \
				ft_putendl_fd ft_split  ft_striteri ft_strlcpy \
				ft_strncmp ft_strtrim ft_toupper ft_bzero  ft_isalpha \
				ft_isprint ft_memcmp ft_memset ft_putnbr_fd ft_strchr \
				ft_strjoin ft_strlen ft_strnstr ft_substr ft_calloc \
				ft_isascii ft_itoa ft_memcpy ft_putchar_fd ft_putstr_fd \
				ft_strdup ft_strlcat ft_strmapi ft_strrchr ft_tolower \
				get_next_line
				
BONUS = ft_lstnew ft_lstadd_front ft_lstadd_back ft_lstsize ft_lstlast \
		ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

SRC_LIBFT = $(addprefix $(SRC_DIR_LIB), $(addsuffix .c, $(SRC_FILES)))
OBJ_LIBFT = $(addprefix $(OBJ_DIR_LIB), $(addsuffix .o, $(SRC_FILES)))

SRC_B 		= $(addprefix $(SRC_DIR_LIB), $(addsuffix .c, $(SRC_FILES)))
OBJ_B		= $(addprefix $(OBJ_DIR_LIB), $(addsuffix .o, $(BONUS)))

# Sources Printf

SRC_PRINTF_FILES = ft_printf ft_printchars ft_printptr minilibft ft_checktype ft_flags ft_itoa_ptf ft_printhexa \
        ft_printnb ft_printunsigned ft_get_length ft_create_array ft_justify_integer \
        ft_str_handler ft_integer_handler ft_justify_hexa ft_justifyptr ft_justify_integer2


SRC_PRINTF = $(addprefix $(SRC_DIR_PRINTF), $(addsuffix .c, $(SRC_PRINTF_FILES)))
OBJ_PRINTF = $(addprefix $(OBJ_DIR_PRINT), $(addsuffix .o, $(SRC_PRINTF_FILES)))

.PHONY: all clean fclean re help debug norm bonus printf

all: $(NAME)

$(NAME): $(OBJ_LIBFT)
	@$(AR) $(NAME) $(OBJ_LIBFT)
	@echo "$(GREEN)Compiled ✓ $(NAME)$(NC)"

printf: $(OBJ_PRINTF)
	@$(AR) $(NAME) $(OBJ_PRINTF)
	@echo "$(GREEN)Added ft_printf ✓$(NC)"

$(OBJ_DIR_LIB)%.o: $(SRC_DIR_LIB)%.c
	@echo "$(YELLOW)Compiling $<...$(NC)"
	@mkdir -p $(OBJ_DIR_LIB)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR_PRINT)%.o: $(SRC_DIR_PRINTF)%.c
	@echo "$(YELLOW)Compiling $<...$(NC)"
	@mkdir -p $(OBJ_DIR_PRINT)
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ_B)
	@$(AR) $(NAME) $(OBJ_B)
	@echo "$(GREEN)Compiled $(NAME) bonus ✓$(NC)"

clean:
	@$(RM) -rf $(OBJ_DIR)
	@echo "$(MAGENTA)Cleaned object files ✓ $(NC)"

fclean: clean
	@$(RM) -f $(NAME) $(PRINTF_NAME)
	@echo "$(MAGENTA)Cleaned $(NAME) ✓ $(NC)"

re: fclean all
	@echo "$(BLUE)Cleaned and recompiled $(NAME) ✓ $(NC)"

debug: CFLAGS += $(DEBUG_FLAGS)
debug: all

norm:
	@norminette */* | grep -v Norme -B1 || true

help:
	@echo "Available targets:"
	@echo "  $(BLUE)all$(NC)   : Build the project"
	@echo "  $(BLUE)printf$(NC): Builds ft_printf"
	@echo "  $(BLUE)clean$(NC) : Remove object files"
	@echo "  $(BLUE)fclean$(NC): Remove object files and the executable"
	@echo "  $(BLUE)re$(NC)    : Rebuild the project"
	@echo "  $(BLUE)bonus$(NC) : Build the project with bonus features"
	@echo "  $(BLUE)debug$(NC) : Build the project with debug flags"
	@echo "  $(BLUE)norm$(NC)  : Check the norm of the project"