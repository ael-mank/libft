NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

INCLUDE_DIR = include

SRC_FILES = $(wildcard *.c)
OBJ_FILES = $(patsubst %.c, %.o, $(SRC_FILES))

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

all: $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) -c $(SRC_FILES)
	gcc -nostartfiles -shared -o libft.so $(OBJ_FILES)

clean:
	rm -f *.o $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all