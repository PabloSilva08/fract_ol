/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:00:16 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/05 19:53:50 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

static void four_sort(t_stk **a, t_stk **b)
{
	t_stk	*tmp;
	int		count_r;

	count_r = 0;
	tmp = *a;
	while (tmp->index != 0)
	{
		tmp = tmp->next;
		count_r++;
	}
	tmp = *a;
	if (count_r <= 1)
	{
		while (tmp->index != 0)
		{
			ft_ra(a);
		}
	}
	else
	{
		while (tmp->index != 0)
		{
			ft_rra(a);
		}
	}
	ft_pb(a, b);
	three_sort_1(a);
	ft_pa(b, a);
	print_stk(*a);
}

static void	three_sort_2(t_stk **s, int n1, int n2, int n3)
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
	if (arg->argc_n == 4)
		four_sort(a, b);
}

void	stack_sort(t_stk **a, t_stk **b, t_arg *arg)
{
	if (arg->argc_n < 6)
		little_sort( a, b, arg);

}
