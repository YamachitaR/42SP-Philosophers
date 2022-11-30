/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_data.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 02:03:44 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/11/29 19:49:11 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"


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

	data->state = malloc(data->number_of_philosophers * sizeof(int));
	return (0);
}