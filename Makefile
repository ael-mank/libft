NAME = libft.a

# Files
INCLUDE_DIR = ./

SRC_FILES = ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c \
				ft_putendl_fd.c ft_split.c  ft_striteri.c ft_strlcpy.c \
				ft_strncmp.c ft_strtrim.c ft_toupper.c ft_bzero.c  ft_isalpha.c \
				ft_isprint.c ft_memcmp.c ft_memset.c ft_putnbr_fd.c ft_strchr.c \
				ft_strjoin.c ft_strlen.c ft_strnstr.c ft_substr.c ft_calloc.c \
				ft_isascii.c ft_itoa.c ft_memcpy.c ft_putchar_fd.c ft_putstr_fd.c \
				ft_strdup.c ft_strlcat.c ft_strmapi.c ft_strrchr.c ft_tolower.c
				
OBJ_FILES = ${SRC_FILES:.c=.o}

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c ft_lstlast.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS	= $(BONUS:.c=.o)

# Compiler
CC = cc

CFLAGS = -Wall -Wextra -Werror

# Rules

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(OBJ_FILES) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC_FILES)
	gcc -nostartfiles -shared -o libft.so $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

.PHONY: all clean fclean re bonus