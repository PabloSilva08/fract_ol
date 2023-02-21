/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_push_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:43:44 by pvieira-          #+#    #+#             */
/*   Updated: 2023/02/20 11:42:34 by pvieira-         ###   ########.fr       */
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
			something_arg_error(81);
		i++;
	}
}

void	checking_repeat(int *lst, unsigned int argc_n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < (argc_n - 1))
	{
		j = i + 1;
		while (j < argc_n)
		{
			if (lst[i] == lst[j])
				something_arg_error(81);
			j++;
		}
		i++;
	}
}

int	ft_atoli(const char *str)
{
	size_t	i;
	long	sign;
	long	result;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	if (((result * sign) < -2147483648) || ((result * sign) > 2147483647))
		something_arg_error(82);
	return (result * sign);
}
