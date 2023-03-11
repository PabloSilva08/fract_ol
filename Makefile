SRCS	=	main.c validation_push_1.c validation_push_2.c error_push.c\
			push_swap.c stack_1.c movement_swap.c movement_push.c\
			movement_rotate.c movement_rotate_reverse.c stack_sort.c\
			stack_sort_little_1.c stack_sort_little_2.c 
PREFD	=	$(addprefix ./push/src/, $(SRCS))

NAME	=	push_swap	
RM		=	rm -rf

all:		$(NAME)

$(NAME):	$(PREFD)
			make -C ./push
			mv ./push/push_swap.x ./$(NAME)

clean:
			make clean -C ./push

fclean:		clean
			make fclean -C ./push
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
