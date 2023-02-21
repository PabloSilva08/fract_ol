/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:15:01 by pvieira-          #+#    #+#             */
/*   Updated: 2023/02/20 10:53:37 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	something_arg_error(int er)
{
	ft_printf("Error\n");
	exit(er);
}

void	erro_malloc_push(int er)
{
	ft_printf("Error Malloc\n");
	exit(er);
}
