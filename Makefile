##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile project
##

CC	=	gcc

CFLAGS	=	-Wall -Wextra -W -Werror
CFLAGS	+=	-I include/ -lc_graph_prog -lm

CFLAGST	=	-lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system

SRC	=	src/my_hunter.c		\
		src/init_system.c	\
		src/move_sprite.c	\
		src/init_sprite.c	\
		src/sfrender.c		\
		src/story.c		\
		src/my_putstr.c		\
		src/my_putchar.c	\
		src/life_management.c	\
		src/my_put_nbr.c	\
		src/analyse_events.c	\
		src/init_rects.c	\
		src/hitbox.c

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

test: $(OBJ)
	$(CC) $(OBJ) $(CFLAGST) -o $(NAME)
	rm -f $(OBJ)
