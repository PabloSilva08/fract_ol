/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:42:19 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/11 09:28:09 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

t_stk	*new_node(int number)
{
	t_stk	*node;

	node = malloc(sizeof(t_stk));
	if (!node)
		return (NULL);
	node->number = number;
	node->index = 1;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

t_stk	*stk_last(t_stk *s)
{
	if (s == NULL)
		return (NULL);
	while (s->next != NULL)
		s = s->next;
	return (s);
}

void	stk_add_back(t_stk **s, t_stk *new)
{
	t_stk	*tmp;

	if (*s == NULL)
		*s = new;
	else
	{
		tmp = stk_last(*s);
		tmp->next = new;
		tmp->next->prev = tmp;
	}
}

int	stk_size(t_stk *s)
{
	unsigned int	count;

	count = 1;
	if (s == NULL)
		return (0);
	while (s->next != NULL)
	{
		count++;
		s = s->next;
	}
	return (count);
}
