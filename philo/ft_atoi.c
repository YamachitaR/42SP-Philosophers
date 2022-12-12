/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:19:18 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/12 07:34:11 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long	ft_atoi(char *str)
{
	int		i;
	long	atoi;

	atoi = 0;
	i = 0;
	while (str[i])
	{
		atoi = atoi * 10 + str[i] - '0';
		i ++;
	}
	return (atoi);
}
