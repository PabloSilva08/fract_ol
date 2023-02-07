NAME	=	push_swap	
RM		=	rm -rf

all:		$(NAME)

$(NAME): 	$(OB) $(OBJF)
			make -C ./fractol
			cp ./fractol/fractol.x ./$(NAME)

clean:
			make clean -C ./fractol

fclean:		clean
			make fclean -C ./fractol
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
