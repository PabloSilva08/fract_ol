SRCS	=	main.c
PREFD	=	$(addprefix ./obj/, $(SRCS))
OBJF	=	$(PREFD:.c=.o)
SRCPATH	=	./src/
OBJPATH	=	./obj/
OB		=	./obj
INCPATH	=	./include/
NAME	=	push_swap.x	
CC		= 	cc
RM		=	rm -f
CFLAGS 	= 	-Wall -Wextra -Werror  
AR 		=	ar -rcs
RM		=	rm -rf

$(OBJPATH)%.o: $(SRCPATH)%.c 
			$(CC) $(CFLAGS) -I$(INCPATH) -c $< -o $@

all:		$(NAME)

$(NAME): 	$(OB) $(OBJF)
			make -C ../ft_printf
			$(CC) $(CFLAGS) $(OBJF) -L../ft_printf/ -lftprintf -o $(NAME)

$(OB):		
			mkdir obj

clean:
			make clean -C ../ft_printf
			$(RM) $(OBJF)
			rm -rf obj

fclean:		clean
			make fclean -C ../ft_printf
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
