/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:15:02 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/11 19:53:32 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	main(int argc, char **argv)
{
	t_arg	arg;

	if (argv[1][0] == '\0')
		return (1);
	if (argc > 1)
	{
		arg = validation_push(argc, argv);
		push_swap(&arg);
		free(arg.union_arg);
		free_split(arg.split_arg);
	}
	return (0);
}
