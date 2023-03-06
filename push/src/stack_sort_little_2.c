/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort_little_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:36:20 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/06 15:50:46 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"
	
static void	search_little_index(int *index_0, int *index_1, t_stk **a)
{
	t_stk	*tmp;
	int		count_tmp;

	count_tmp = 0;
	tmp = *a;
	while (tmp->index != 0)
	{
		tmp = tmp->next;
		count_tmp++;
	}
	*index_0 = count_tmp;
	count_tmp = 0;
	tmp = *a;
	while (tmp->index != 1)
	{
		tmp = tmp->next;
		count_tmp++;
	}
	*index_1 = count_tmp;
//	if (*index_0 > *index_1)
//		*index_0 = *index_0 - *index_1;
//	else
//		*index_1 = *index_1 - *index_0;
}

void	five_sort_1(t_stk **a, t_stk **b)
{
	int		count_index_0;
	int		count_index_1;

	count_index_0 = 0;
	count_index_1 = 0;
	search_little_index(&count_index_0, &count_index_1, a);
	ft_printf("i_0 = %d\ni_1 = %d\n", count_index_0, count_index_1);
	ft_pa(b, a);
}
