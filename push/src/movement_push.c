/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 06:49:47 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/06 13:37:37 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

static void	push_stk(t_stk **s1, t_stk **s2)
{
	if (*s2 == NULL)
	{
		*s2 = *s1;
		*s1 = (*s1)->next;
		(*s2)->next = NULL;
		(*s1)->prev = NULL;
	}
	else
	{
		(*s1)->next = *s2;
		(*s2)->prev = *s1;
		*s2 = *s1;
		*s1 = NULL;
	}
}

void	ft_pb(t_stk **a, t_stk **b)
{
	unsigned int	count;

	count = stk_size(*a);
	if (count > 0)
	{
		push_stk(a, b);
		ft_printf("pb\n");
	}
}

void	ft_pa(t_stk **b, t_stk **a)
{
	unsigned int	count;

	count = stk_size(*b);
	if (count > 0)
	{
		push_stk(b, a);
		ft_printf("pa\n");
	}
}
