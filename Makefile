NAME	=	libft.a

CFILES	=	$(wildcard files/*.c)

OFILES	=	$(CFILES:.c=.o)

CC	=	gcc	
CFLAGS	=	-Wall	-Wextra	-Werror

all:	$(NAME)	clean

$(NAME):	$(OFILES)
	ar	rcs	$(NAME)	$(OFILES)

clean:
	rm -f $(OFILES)