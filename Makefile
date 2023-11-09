LIBRARY_NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

INCLUDE_DIR = include

SRC_FILES = $(wildcard *.c)
OBJ_FILES = $(patsubst %.c, %.o, $(SRC_FILES))

$(LIBRARY_NAME): $(OBJ_FILES)
	ar rcs $(LIBRARY_NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean:
	rm -f *.o $(LIBRARY_NAME)