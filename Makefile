##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile project
##

CC	=	gcc

CFLAGS	=	-Wall -Wextra -W -Werror -pedantic
CFLAGS	=	-I include/ -lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system -lm

SRC	=	my_hunter.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) $(LIB) -o $(NAME)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
