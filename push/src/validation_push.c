/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:09:40 by pvieira-          #+#    #+#             */
/*   Updated: 2023/02/13 17:20:57 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

//static	void	something_arg_error(void)
//{
//	ft_printf("Error\n");
//	exit(22);
//}

static	void	validation_number(int argc, char **argv)
{
	unsigned int	i;
//f (ft_atoi(argv[i]) < -2147483648 || ft_atoi(argv[i]) > 2147483647)
	i = 1
	while (i < argc)
	{

	}
}

static	char	*joining_arguments(int argc, char **argv)
{
	unsigned int	i;
	char			*arg_new;
	char			*temp;

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
	char	*one_arg;
	char	**split_arg;
//	long	**arg_int;
//	int		i;

//	i = 0;

	validation_number(argc, argv);
	one_arg = joining_arguments(argc, argv);
	split_arg = ft_split(one_arg, ' ');
	free(one_arg);

/* ----------------Bloco de teste------------------------------------
	while (split_arg[i] != NULL)
	{
		ft_printf("split_arg[%d] = %s\n",i ,split_arg[i]);
		i++;
	}
	i = 0;
	ft_printf("\n\n");
}
----------------Bloco de teste------------------------------------*/

/*	while (argv[i])
	{
		if (argv[i] < '0' || argv[i] > '9')
			something_arg_error();
		if (ft_atoi(argv[i]) < -2147483648 || ft_atoi(argv[i]) > 2147483647)
			something_arg_error();
		i++;
	}
	*/
