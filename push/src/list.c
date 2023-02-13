/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:35:58 by pvieira-          #+#    #+#             */
/*   Updated: 2023/02/11 17:34:50 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

t_list* create_stack()
{
	return (NULL);
}

t_list* create_node(int number)
{
	t_list* node;

	node= malloc(sizeof *node);
	if (!node)
		return (NULL);
	node->number = number;
	node->next = NULL;
	return (node);
}

t_list* insert_top(t_list* list, int number)
{
	t_list* node;

	if (!list)
		return (NULL);
	node = create_node(number);
	if (!node)
		return (NULL);
	node->next = list;
	return (node);
}
