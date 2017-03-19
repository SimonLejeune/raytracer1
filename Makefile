##
## Makefile for raytracer1 in /Users/simonlejeune/C_Graphical_Programming/Sem2/raytracer1/
##
## Made by Simon LEJEUNE
## Login   <simon.lejeune@epitech.eu>
##
## Started on  Thu Feb 23 10:42:16 2017 Simon LEJEUNE
## Last update Sun Mar 19 18:13:59 2017 Simon LEJEUNE
##

CC	=	gcc

CFLAGS	=	-lc_graph_prog -I ./include

SRC	=	src/calc_dir_vector.c \
		src/cone.c \
		src/cylinder.c \
		src/light.c \
		src/main.c \
		src/plane.c \
		src/rotate.c \
		src/sphere.c \
		src/translate.c \
		src/open_window.c

OBJ	=	$(SRC:.c=.o)

NAME	=	raytracer1

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
