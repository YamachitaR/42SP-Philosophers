/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_data.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 02:03:44 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/02 21:14:42 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int ft_born_philosopher(t_data *data);

int ft_initialize_data(t_data *data, char **argv)
{
	data->number_of_philosophers = ft_atoi(argv[1]);
	data->time_to_die = ft_atoi(argv[2]);
	data->time_to_eat = ft_atoi(argv[3]);
	data->time_to_sleep = ft_atoi(argv[4]);
	if(argv[5])
		data->number_of_times_each_philosopher_must_eat = ft_atoi(argv[5]);
	else 
		data->number_of_times_each_philosopher_must_eat = 0;
	ft_born_philosopher(data);
	
	return (0);
}

static int ft_born_philosopher(t_data *data)
{
	int i;
	data->state = malloc(data->number_of_philosophers * sizeof(int));
	data->pthread_philosophers = malloc(data->number_of_philosophers * sizeof(pthread_t));
	data->forks = malloc(data->number_of_philosophers * sizeof(pthread_mutex_t));

	pthread_mutex_init(&data->mutex, NULL); 

	i = -1;
	while(++i < data->number_of_philosophers)
		 pthread_mutex_init(&data->forks[i], NULL); 
	i = -1;
	while(++i < data->number_of_philosophers)
	{
		data->philo = i;
		pthread_create(&data->pthread_philosophers[i], NULL, ft_philosopher, &(*data));
	}
	i = -1;
	while(++i < data->number_of_philosophers)
		pthread_join(data->pthread_philosophers[i], NULL);
	
	return(1);

}