##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile project
##

CC	=	gcc

CFLAGS	=	-Wall -Wextra -W -Werror
CFLAGS	+=	-I include/ -lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system -lm

SRC	=	my_hunter.c	\
		init_system.c	\
		move_sprite.c	\
		init_sprite.c	\
		sfrender.c	\
		hitbox.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
