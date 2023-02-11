/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:17:38 by pvieira-          #+#    #+#             */
/*   Updated: 2023/02/11 14:38:30 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H
# include "../../ft_printf/include/ft_printf.h"
# include <stdlib.h>

typedef struct s_list
{
	int		number;
	int		index;
	t_list	next;
}				t_list;


#endif
