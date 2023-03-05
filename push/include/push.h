/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:17:38 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/05 14:02:32 by pvieira-         ###   ########.fr       */
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
}	t_stk;

typedef struct s_arg
{
	char			*union_arg;
	char			**split_arg;
	unsigned int	argc_n;
}	t_arg;

t_arg	validation_push(int argc, char **argv);
void	something_arg_error(int er);
void	erro_malloc_push(int er);
void	something_went_wrong(void);
void	checking_digits(char *arg);
void	checking_repeat(int *lst, unsigned int argc_n);
void	push_swap(t_arg *arg);
int		ft_atoli(const char *str);
t_stk	*new_node(int number);
t_stk	*stk_last(t_stk *s);
void	stk_add_back(t_stk **s, t_stk *new);
void	ft_sa(t_stk **a);
void	ft_sb(t_stk **b);
void	ft_ss(t_stk **a, t_stk **b);
int		stk_size(t_stk *s);
void	ft_pb(t_stk **a, t_stk **b);
void	ft_pa(t_stk **b, t_stk **a);
void	ft_ra(t_stk **a);
void	ft_rb(t_stk **b);
void	ft_rr(t_stk **a, t_stk **b);
void	ft_rra(t_stk **a);
void	ft_rrb(t_stk **b);
void	ft_rrr(t_stk **a, t_stk **b);
#endif
