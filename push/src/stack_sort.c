/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:00:16 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/05 17:59:07 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	three_sort_2(t_stk **s, int n1, int n2, int n3)
{
	if (n1 > n2 && n2 < n3 && n1 > n3)
		ft_ra(s);
	if (n1 < n2 && n2 > n3 && n1 < n3)
	{
		ft_sa(s);
		ft_ra(s);
	}
	if (n1 < n2 && n2 > n3 && n1 > n3)
		ft_rra(s);
}

void	three_sort_1(t_stk **s)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = (*s)->number;
	n2 = (*s)->next->number;
	n3 = (*s)->next->next->number;

	if (n1 > n2 && n2 < n3 && n1 < n3)
		ft_sa(s);
	else if (n1 > n2 && n2 > n3)
	{
		ft_sa(s);
		ft_rra(s);
	}
	else
		three_sort_2(s, n1, n2, n3);
}

static void	little_sort(t_stk **a, t_stk **b, t_arg *arg)
{
	if (arg->argc_n == 2)
	{	
		if ((*a)->number > (*a)->next->number)
		ft_sa(a);
	}
	if (arg->argc_n == 3)
		three_sort_1(a);

		ft_sb(b); // tirar essa merda
}

void	stack_sort(t_stk **a, t_stk **b, t_arg *arg)
{
	if (arg->argc_n < 6)
		little_sort( a, b, arg);

}
