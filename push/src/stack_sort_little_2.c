/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort_little_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:36:20 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/07 10:35:20 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"
	
static int	search_little_index(t_stk **s)
{
	t_stk	*tmp;
	int		count_r;
	int		count_rr;

	count_r = 0;
	count_rr = 1;
	tmp = *s;
	while (tmp->index != 0 && tmp->index != 1 && tmp->next != NULL)
	{
		tmp = tmp->next;
		count_r++;
	}
	tmp = stk_last(*s);
	while (tmp->index != 0 && tmp->index != 1 && tmp->prev != NULL)
	{
		tmp = tmp->prev;
		count_rr++;
	}
	if (count_r <= count_rr)
		return (0);
	else
		return (1);
}

static void	routine_for_ra_pb(t_stk **a, t_stk **b)
{
	while ((*a)->index != 0 && (*a)->index != 1)
		ft_ra(a);
	ft_pb(a, b);
}

static void	routine_for_rra_pb(t_stk **a, t_stk **b)
{
	while ((*a)->index != 0 && (*a)->index != 1)
		ft_rra(a);
	ft_pb(a, b);
}

void	five_sort_1(t_stk **a, t_stk **b)
{
	int	flag_rotate;

	flag_rotate = search_little_index(a);
	if (flag_rotate == 0)
		routine_for_ra_pb(a, b);
	else
		routine_for_rra_pb(a, b);
	flag_rotate = search_little_index(a);
	if (flag_rotate == 0)
		routine_for_ra_pb(a, b);
	else
		routine_for_rra_pb(a, b);

//	ft_printf("flag = %d\n", flag_rotate);
//	ft_printf("L = a\n");
//	print_stk(*a);
////	ft_printf("flag = %d\n", flag_rotate);
//	ft_printf("L = b\n");
//	print_stk(*b);
}
