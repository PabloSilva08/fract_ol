/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_rotate_reverse.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 10:45:23 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/06 11:01:35 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

static void	rotate_reverse_stk(t_stk **s)
{
	t_stk	*tmp;

	tmp = stk_last(*s);
	tmp->next = *s;
	tmp->prev->next = NULL;
	tmp->next->prev = tmp;
	tmp->prev = NULL;
	*s = tmp;
}

void ft_rra(t_stk **a)
{
	int	count;

	count = stk_size(*a);
	if (count > 1)
	{
		rotate_reverse_stk(a);
		ft_printf("rra\n");
	}
}

void ft_rrb(t_stk **b)
{
	int	count;

	count = stk_size(*b);
	if (count > 1)
	{
		rotate_reverse_stk(b);
		ft_printf("rrb\n");
	}
}

void ft_rrr(t_stk **a, t_stk **b)
{
	int	count_a;
	int	count_b;

	count_a = stk_size(*a);
	count_b = stk_size(*b);
	if (count_a > 1 && count_b > 1)
	{
		rotate_reverse_stk(a);
		rotate_reverse_stk(b);
		ft_printf("rrr\n");
	}
}
