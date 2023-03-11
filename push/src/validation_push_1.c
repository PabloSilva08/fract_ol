/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_push_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:09:40 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/11 19:51:04 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

static	void	validation_number(unsigned int argc_n, char **split_arg)
{
	unsigned int	i;
	int				*lst;

	i = 0;
	while (split_arg[i] != NULL)
	{
		checking_digits(split_arg[i]);
		i++;
	}
	lst = malloc(sizeof(int) * argc_n);
	if (!lst)
		erro_malloc_push(8812);
	i = 0;
	while (i < argc_n)
	{
		lst[i] = ft_atoli(split_arg[i]);
		i++;
	}
	checking_repeat(lst, argc_n);
	if (argc_n == 1)
	{
		free(lst);
		exit(80);
	}
	free(lst);
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
	int		i;
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

t_arg	validation_push(int argc, char **argv)
{
	t_arg	arg;

	arg.union_arg = joining_arguments(argc, argv);
	arg.split_arg = ft_split(arg.union_arg, ' ');
	arg.argc_n = count_arg(arg.split_arg);
	validation_number(arg.argc_n, arg.split_arg);
	return (arg);
}

void	free_split(char **lst)
{
	int	i;

	i = 0;
	while (lst[i])
	{
		free(lst[i]);
		i++;
	}
	free(lst);
}
