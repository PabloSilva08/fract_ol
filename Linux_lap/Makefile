SRCS	=	main.c frac_util.c

OBJ		=	$(SRCS:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

NAME	=	mini.x

%.o: %.c
			$(CC) -I/usr/include -Imlx_linux -O3 -c $< -o $@

all:		$(NAME)

$(NAME): 	$(OBJ)
			$(CC) $(OBJ) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
