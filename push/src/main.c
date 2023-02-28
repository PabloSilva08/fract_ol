/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:15:02 by pvieira-          #+#    #+#             */
/*   Updated: 2023/02/28 11:24:56 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	main(int argc, char **argv)
{
	t_arg	arg;
//	int	i; //tirar

//	i = 0; //tirar
	if (argc > 1)
	{
		arg = validation_push(argc, argv);
		push_swap(&arg);
//		free(arg.split_arg);



// ----------------Bloco de teste------------------------------------
//		while (arg.split_arg[i] != NULL)
//		{
//			ft_printf("split_arg[%d] = %s\n",i , arg.split_arg[i]);
//			i++;
//		}
//		ft_printf("\n\n");
// ----------------Bloco de teste------------------------------------
	}
	return (0);
}
