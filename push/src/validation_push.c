/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:09:40 by pvieira-          #+#    #+#             */
/*   Updated: 2023/02/18 13:40:47 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	something_arg_error(void)
{
	ft_printf("Error\n");
	exit(22);
}

static	void	validation_number(unsigned int arg_number, char **split_arg)
{
	unsigned int	i;

	i = 0;
	if (arg_number < 2) // acertar para caso seja passado somente um sinal e dar Error
	{
		checking_digits(split_arg[0]);
		checking_limits(split_arg[0]);
		//estou aqui acertando a validaçao apra 1 argumento

	}
		exit (0);
	while (split_arg[i] != NULL)
	{
		checking_digits(split_arg[i]);
		checking_limits(split_arg[i]);
		i++;
	}
}

static	unsigned int	count_arg(char **split_arg)
{
	unsigned int	count;

	count = 0;
	while (split_arg[count] != NULL)
		count++;
	return (count);
}

static	char	*joining_arguments(int argc, char **argv)
{
	 int	i;
	char	*arg_new;
	char	*temp;

	i = 1;
	arg_new = ft_strdup("");
	while (i < argc)
	{
		temp = arg_new;
		arg_new = ft_strjoin(arg_new, argv[i]);
		free(temp);
		if (argv[i + 1] != NULL)
		{
			temp = arg_new;
			arg_new = ft_strjoin(arg_new, " ");
			free(temp);
		}
		i++;
	}
	return (arg_new);
}

void	validation_push(int argc, char **argv)
{
	char				*one_arg;
	char				**split_arg;
	unsigned int		arg_number;
	int		i;

	i = 0;

	one_arg = joining_arguments(argc, argv);
	split_arg = ft_split(one_arg, ' ');
	free(one_arg);
	arg_number = count_arg(split_arg);
	ft_printf("arg_number = %d\n\n", arg_number);
	validation_number(arg_number, split_arg);
//}
// ----------------Bloco de teste------------------------------------
	while (split_arg[i] != NULL)
	{
		ft_printf("split_arg[%d] = %s\n",i ,split_arg[i]);
		i++;
	}
	ft_printf("\n\n");
}
//----------------Bloco de teste------------------------------------
