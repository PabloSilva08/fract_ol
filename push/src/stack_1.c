/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:42:19 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/04 12:15:55 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

t_stk	*new_node(int number)
{
	t_stk	*node;

	node = malloc(sizeof(t_stk));
	if (!node)
		return(NULL);
	node->number = number;
	node->index = 0;
	node->next = NULL;
	return (node);
}

t_stk *stk_last(t_stk *s)
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
	}
}
