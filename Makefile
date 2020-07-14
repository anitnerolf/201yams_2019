##
## EPITECH PROJECT, 2020
## 201yams
## File description:
## makefile
##

SRC	=	main.cpp	\

OBJ	=	$(SRC:.cpp=.o)

NAME	=	201yams

CFLAGS	=	-Wall -Wextra -Werror

all:		$(NAME) message

$(NAME):	$(OBJ)
		g++ -o $(NAME) $(OBJ) $(CFLAGS) -lm

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

message:
		@echo "Successfully compiled!"
