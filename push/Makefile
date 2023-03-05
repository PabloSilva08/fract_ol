SRCS	=	main.c validation_push_1.c validation_push_2.c error_push.c\
			push_swap.c stack_1.c movement_swap.c movement_push.c\
			movement_rotate.c movement_rotate_reverse.c stack_sort.c
PREFD	=	$(addprefix ./obj/, $(SRCS))
OBJF	=	$(PREFD:.c=.o)
SRCPATH	=	./src/
OBJPATH	=	./obj/
OB		=	./obj
INCPATH	=	./include/
NAME	=	push_swap.x	
CC		= 	cc
RM		=	rm -f
CFLAGS 	= 	-g -Wall -Wextra -Werror  
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
