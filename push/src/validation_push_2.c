/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_push_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:43:44 by pvieira-          #+#    #+#             */
/*   Updated: 2023/02/19 11:18:06 by pvieira-         ###   ########.fr       */
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

static void	checking_11(char	*arg)
{
	if (arg[0] == '+')
	{
		if ((ft_strncmp(arg, "+2147483647", 11)) > 0)
			something_arg_error();
	}
	if (arg[0] == '-')
	{
		if ((ft_strncmp(arg, "-2147483648", 11)) > 0)
			something_arg_error();
	}
	if (arg[0] == '0')
	{
		if ((ft_strncmp(arg, "02147483647", 11)) > 0)
			something_arg_error();
	}
}

void	checking_limits(char *arg)
{
	if (ft_strlen(arg) > 11)
		something_arg_error();
	if (ft_strlen(arg) == 11)
		checking_11(arg);
	else
	{
		if (arg[0] != '+' && arg[0] != '-' && arg[0] != '0')
			something_arg_error();
	}
}
