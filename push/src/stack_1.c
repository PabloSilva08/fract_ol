/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:42:19 by pvieira-          #+#    #+#             */
/*   Updated: 2023/02/20 22:32:34 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	istk(t_stk **s)
{
	*s = malloc(sizeof(t_stk *));
	(*s)->number = 0;
	(*s)->index = 0;
	(*s)->next = NULL;
}

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

void	stk_add_back(t_stk **s, t_stk *new)
{
	t_stk	*tmp;

	if ((*s)->next == NULL)
		(*s)->next = new;
	else
	{
		tmp = *s;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
