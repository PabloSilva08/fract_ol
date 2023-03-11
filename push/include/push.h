/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:17:38 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/11 18:34:17 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H
# include "../../ft_printf/include/ft_printf.h"
# include <stdlib.h>

typedef struct s_stk
{
	int				number;
	int				index;
	struct s_stk	*next;
	struct s_stk	*prev;
}	t_stk;

typedef struct s_arg
{
	char			*union_arg;
	char			**split_arg;
	unsigned int	argc_n;
}	t_arg;

// -----------validation_push_1.c-----------

t_arg	validation_push(int argc, char **argv);
void	free_stack(t_stk *stack);
void	free_split(char **lst);

// -----------error_push.c-----------------

void	something_arg_error(int er);
void	erro_malloc_push(int er);

void	checking_digits(char *arg);
void	checking_repeat(int *lst, unsigned int argc_n);

// -----------push_swap.c-----------------

void	push_swap(t_arg *arg);
int		ft_atoli(const char *str);
int		validation_order(t_stk **s, t_arg *arg);

// -----------stack_1.c-------------------

t_stk	*new_node(int number);
t_stk	*stk_last(t_stk *s);
void	stk_add_back(t_stk **s, t_stk *new);
int		stk_size(t_stk *s);

// -----------movement_swap.c-------------

void	ft_sa(t_stk **a);
void	ft_sb(t_stk **b);
void	ft_ss(t_stk **a, t_stk **b);

// -----------movement_push.c-------------

void	ft_pb(t_stk **a, t_stk **b);
void	ft_pa(t_stk **b, t_stk **a);

// -----------movement_rotate.c-----------

void	ft_ra(t_stk **a);
void	ft_rb(t_stk **b);
void	ft_rr(t_stk **a, t_stk **b);

// -----------movement_rotate_reverse.c----

void	ft_rra(t_stk **a);
void	ft_rrb(t_stk **b);
void	ft_rrr(t_stk **a, t_stk **b);

// -----------stack_sort.c-----------------

void	stack_sort(t_stk **a, t_stk **b, t_arg *arg);
void	three_sort_1(t_stk **s);

// -----------stack_sort_little_1.c-----------------

void	little_sort(t_stk **a, t_stk **b, t_arg *arg);

// -----------stack_sort_little_2.c-----------------

void	five_sort_1(t_stk **a, t_stk **b);
#endif
