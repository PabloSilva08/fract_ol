/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 12:38:43 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/05 10:37:22 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

static void	swap_stk(t_stk **s)
{
	t_stk	*tmp_1;
	t_stk	*tmp_2;

	tmp_1 = *s;
	tmp_2 = (*s)->next->next;
	*s = (*s)->next;
	(*s)->next = tmp_1;
	(*s)->next->next = tmp_2;
}

void	ft_sa(t_stk **a)
{
	unsigned int	count;

	count = stk_size(*a);
	if (count >= 2)
	{
		swap_stk(a);
		ft_printf("sa\n");
	}
}

void	ft_sb(t_stk **b)
{
	unsigned int	count;

	count = stk_size(*b);
	if (count >= 2)
	{
		swap_stk(b);
		ft_printf("sb\n");
	}
}

void	ft_ss(t_stk **a, t_stk **b)
{
	unsigned int	count_a;
	unsigned int	count_b;

	count_a = stk_size(*a);
	count_b = stk_size(*b);
	if (count_a >= 2 && count_b >= 2)
	{
		swap_stk(a);
		swap_stk(b);
		ft_printf("ss\n");
	}
}
