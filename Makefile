##
## EPITECH PROJECT, 2024
## STUMPERS
## File description:
## Makefile
##

NAME	=	library

OBJ	=	$(SRC:.c=.o)

SRC	=	src/main.c\

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -g -Wall -Wextra

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: re fclean clean all
