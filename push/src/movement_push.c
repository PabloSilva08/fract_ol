/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 06:49:47 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/11 17:11:50 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

static void	push_stk(t_stk **src, t_stk **dst)
{
	t_stk	*tmp;

	ft_printf("C\n"); // tirar essa merda;
	if (*src == NULL)
		return ;
	tmp = *src;
	*src = (*src)->next; 
	if (*src != NULL)
		(*src)->prev = NULL;
	tmp->next = *dst;
	if (*dst != NULL)
		(*dst)->prev = tmp;
	*dst = tmp;
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
	ft_printf("D\n"); // tirar essa merda;
	if (count > 0)
	{
		push_stk(b, a);
		ft_printf("pa\n");
	}
}
