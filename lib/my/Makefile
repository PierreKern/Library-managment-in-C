##
## EPITECH PROJECT, 2023
## task 1
## File description:
## makefile
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mkdir -p ../../include

clean:
	rm -f $(OBJ)
	rm libmy.a

fclean: clean
	rm -f $(NAME)

re:	fclean all
