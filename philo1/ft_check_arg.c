/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:03:01 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/01 19:33:59 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	ft_is_unsigned_integer(char *str);

int	ft_check_arg(int argc, char **argv)
{
	int	i;

	if (argc < 5 || argc > 6)
	{
		printf("The amount of argument is wrong!\n");
		return (0);
	}
	i = 1;
	while (argv[i])
	{
		if (ft_is_unsigned_integer(argv[i]) == 0 || ft_atoi(argv[i]) < 1)
		{
			printf("The argument value (%s) is wrong!\n", argv[i]);
			return (0);
		}
		i ++;
	}
	return (1);
}

static int	ft_is_unsigned_integer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i ++;
	}
	return (1);
}
