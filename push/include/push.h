/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:17:38 by pvieira-          #+#    #+#             */
/*   Updated: 2023/02/18 13:22:19 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H
# include "../../ft_printf/include/ft_printf.h"
# include <stdlib.h>

typedef struct s_list_push
{
	int		number;
	int		index;
	t_list	next;
}				t_l_push;

void	validation_push(int argc, char **argv);
void	something_arg_error(void);
void	checking_digits(char *arg);
void	checking_limits(char *arg);
#endif
