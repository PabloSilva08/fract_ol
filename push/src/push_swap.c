/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:34:39 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/04 08:00:38 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

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

void	push_swap(t_arg *arg)
{
	t_stk			*a;
	t_stk			*tmp;
	unsigned int	i;

	a = NULL;
	tmp = NULL;
	i = 0;
	while (i < arg->argc_n)
	{
		tmp = new_node(ft_atoli(arg->split_arg[i]));
		stk_add_back(&a, tmp);
		i++;
	}
	indexing_stk(&a, arg);

//-------------------------Bloco de teste--------------------------------
	ft_printf("\n-------------------------------------\n");
	while (a->next != NULL)
	{
		ft_printf("a->number = %d\n", a->number);
		ft_printf("a->index = %d\n", a->index);
		ft_printf("-------------------------------------\n\n");
		a = a->next;
	}
	ft_printf("a->number = %d\n", a->number);
	ft_printf("a->index = %d\n", a->index);
	ft_printf("-------------------------------------\n\n");
//-------------------------Bloco de teste--------------------------------

}
