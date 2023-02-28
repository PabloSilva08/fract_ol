/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:17:38 by pvieira-          #+#    #+#             */
/*   Updated: 2023/02/20 22:55:16 by pvieira-         ###   ########.fr       */
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
	struct	s_stk	*next;
}				t_stk;

typedef struct s_arg
{
	char			*union_arg;
	char			**split_arg;
	unsigned int	argc_n;
}				t_arg;

t_arg	validation_push(int argc, char **argv);
void	something_arg_error(int er);
void	erro_malloc_push(int er);
void	something_went_wrong(void);
void	checking_digits(char *arg);
void	checking_repeat(int *lst, unsigned int argc_n);
void	push_swap(t_arg *arg);
int		ft_atoli(const char *str);
t_stk	*new_node(int number);
void	stk_add_back(t_stk **s, t_stk *new);

#endif
