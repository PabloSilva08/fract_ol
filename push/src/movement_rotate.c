/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 08:55:04 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/06 11:29:19 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

static void	rotate_stk(t_stk **s)
{
	t_stk	*tmp;

	tmp = stk_last(*s);
	tmp->next = *s;
	*s = (*s)->next;
	(*s)->prev = NULL;
	tmp->next->prev = tmp->next;
	tmp->next->next = NULL;
}

void	ft_ra(t_stk **a)
{
	int	count;

	count = stk_size(*a);
	if (count > 1)
	{
		rotate_stk(a);
		ft_printf("ra\n");
	}
}

void	ft_rb(t_stk **b)
{
	int	count;

	count = stk_size(*b);
	if (count > 1)
	{
		rotate_stk(b);
		ft_printf("rb\n");
	}
}

void	ft_rr(t_stk **a, t_stk **b)
{
	int	count_a;
	int	count_b;

	count_a = stk_size(*a);
	count_b = stk_size(*b);
	if (count_a > 1 && count_b > 1)
	{
		rotate_stk(a);
		rotate_stk(b);
		ft_printf("rr\n");
	}
}
