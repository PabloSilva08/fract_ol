/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:34:39 by pvieira-          #+#    #+#             */
/*   Updated: 2023/02/20 22:56:09 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	push_swap(t_arg *arg)
{
	t_stk	*a;
	t_stk	*tmp;
	unsigned int i;

	a = new_node(ft_atoli(arg->split_arg[0]));
	i = 1;
	while (i < arg->argc_n)
	{
		tmp = new_node(ft_atoli(arg->split_arg[i]));
		stk_add_back(&a, tmp);
		i++;
	}

//-------------------------Bloco de teste--------------------------------
	while (a->next != NULL)
	{
		ft_printf("a->number = %d\n", a->number);
		a = a->next;
	}
	ft_printf("a->number = %d\n", a->number);
//-------------------------Bloco de teste--------------------------------

}
