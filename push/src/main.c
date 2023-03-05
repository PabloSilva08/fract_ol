/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:15:02 by pvieira-          #+#    #+#             */
/*   Updated: 2023/03/05 14:04:31 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	main(int argc, char **argv)
{
	t_arg	arg;

	if (argc > 1)
	{
		arg = validation_push(argc, argv);
		push_swap(&arg);
		free(arg.split_arg);
	}
	return (0);
}
