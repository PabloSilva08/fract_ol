/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:34:39 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/06 11:54:32 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

static t_stk	*creating_stk(t_stk *a, t_arg *arg)
{
	t_stk			*tmp;
	unsigned int	i;

	tmp = NULL;
	i = 0;
	while (i < arg->argc_n)
	{
		tmp = new_node(ft_atoli(arg->split_arg[i]));
		stk_add_back(&a, tmp);
		i++;
	}
	return (a);
}

static	void	indexing_stk(t_stk **a, t_arg *arg)
{
	unsigned int	i;
	unsigned int	j;
	t_stk			*tmp_a;
	t_stk			*tmp;

	i = 0;
	tmp_a = *a;
	while (i < (arg->argc_n - 1))
	{
		tmp = tmp_a;
		tmp = tmp->next;
		j = i + 1;
		while (j++ < arg->argc_n)
		{
			if (tmp_a->number < tmp->number)
				tmp->index++;
			else
				tmp_a->index++;
			tmp = tmp->next;
		}
		tmp_a = tmp_a->next;
		i++;
	}
}

//-------------------------Bloco de teste--------------------------------
void print_stk(t_stk *a)
{
	ft_printf("\n-------------------------------------\n");
	int	i = 0;
	while (a != NULL)
	{
		//ft_printf("a->number = %d\n", a->number);
		ft_printf("%p Node[%i]\n", &a->number, i++);
		ft_printf("a->number = %d\n", a->number);
		ft_printf("a->index = %d\n", a->index);
		ft_printf("a->next = %p\n", a->next);
		ft_printf("a->prev = %p\n", a->prev);
		ft_printf("-------------------------------------\n\n");
		a = a->next;
	}
}
//-------------------------Bloco de teste--------------------------------

void	push_swap(t_arg *arg)
{
	t_stk	*a;
	t_stk	*b;

	a = NULL;
	b = NULL;
	a = creating_stk(a, arg);
	indexing_stk(&a, arg);
	stack_sort(&a, &b, arg);

//-----------------------Bloco de teste---------------------------------
	//ft_printf("\nstk a");
	//print_stk(a);
	//ft_sa(&a);
	//ft_printf("\nstk a");
	//print_stk(a);
	//ft_printf("\nstk b");
	//print_stk(b);
	//ft_pa(&a, &b);
	//ft_pa(&a, &b);
	//ft_printf("\nstk a");
	//print_stk(a);
	//ft_printf("\nstk b");
	//print_stk(b);
//	ft_rrr(&a, &b);
//	ft_printf("\nstk a");
//	print_stk(a);
//	ft_printf("\nstk b");
//	print_stk(b);
//-----------------------Bloco de teste---------------------------------
}
