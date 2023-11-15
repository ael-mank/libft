NAME = libft.a

CC = cc

RM = rm -f

AR	= ar rc

CFLAGS = -Wall -Wextra -Werror

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

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJ_FILES}
			${AR} ${NAME} ${OBJ_FILES}

all: $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC_FILES)
	gcc -nostartfiles -shared -o libft.so $(OBJ_FILES)

clean:
		${RM} ${OBJ_FILES} ${BONUS_OBJS}

fclean:		clean
			${RM} $(NAME)

re: fclean all

bonus:		$(BONUS_OBJS)
			${AR} $(NAME) $(BONUS_OBJS)

.PHONY:		all clean fclean re bonus