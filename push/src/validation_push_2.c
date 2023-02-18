/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_push_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:43:44 by pvieira-          #+#    #+#             */
/*   Updated: 2023/02/18 13:26:02 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	checking_digits(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] == '+' || arg[i] == '-')
			i++;
		if (ft_isdigit(arg[i]) == 0)
			something_arg_error();
		i++;
	}
}

void	checking_limits(char *arg)
{

	if (ft_strlen(arg) > 11)
		something_arg_error();
		
}
