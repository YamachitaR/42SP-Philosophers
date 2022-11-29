/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_data.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 02:03:44 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/11/04 01:26:02 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int ft_atoi (char *str);

int ft_initialize_data(t_data *data, char **argv)
{
	data->number_of_philosophers = ft_atoi(argv[1]);
	data->time_to_die = ft_atoi(argv[2]);
	data->time_to_eat = ft_atoi(argv[3]);
	data->time_to_sleep =ft_atoi(argv[4]);
	if(argv[5])
		data->number_of_times_each_philosopher_must_eat = ft_atoi(argv[5]);
	else 
		data->number_of_times_each_philosopher_must_eat = 0;
	return (0);
}

static int ft_atoi (char *str)
{
	int	i;
	int atoi;

	atoi = 0;
	i = 0;
	while(str[i])
	{
		atoi= atoi*10 + str[i] - '0';
		i ++;
	}
	return (atoi);
}