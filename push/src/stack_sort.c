/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:00:16 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/11 17:17:29 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

static void	big_sort(t_stk **a, t_stk **b, t_arg *arg)
{
	unsigned	int	i;
	int			bit;

	bit = 0;
	while ( validation_order(a, arg) != 0)
	{
		i = 0;
		while (i < arg->argc_n)
		{
			if ((*a)->index & 1 << bit)
				ft_ra(a);
			else
				ft_pb(a, b);
			i++;
		}
		bit++;
		while ((*b) != NULL)
			ft_pa(b, a);
	}
}

void	stack_sort(t_stk **a, t_stk **b, t_arg *arg)
{
	if (arg->argc_n < 6)
		little_sort( a, b, arg);
	else
		big_sort(a, b, arg);
}
