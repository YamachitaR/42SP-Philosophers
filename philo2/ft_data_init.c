/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 02:03:44 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/07 21:56:41 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void ft_argv_to_data(t_data *data, char **argv);
static int ft_data_malloc(t_data *data);

int ft_data_init(t_data *data, char **argv)
{
	ft_argv_to_data(data, argv);
	if(ft_data_malloc(t_data *data))
		return (1);
	data->dinner_status = 1;
}

static void ft_argv_to_data(t_data *data, char **argv)
{
	data->number_of_philosophers = ft_atoi(argv[1]);
	data->time_to_die = ft_atoi(argv[2]);
	data->time_to_eat = ft_atoi(argv[3]);
	data->time_to_sleep = ft_atoi(argv[4]);
	data->number_of_times_each_philosopher_must_eat = -1;
	if(argv[5])
		data->number_of_times_each_philosopher_must_eat = ft_atoi(argv[5]);

}

static int ft_data_malloc(t_data *data)
{
	data->philo_status = malloc(data->number_of_philosophers * sizeof(int));
	data->forks = malloc(data->number_of_philosophers * sizeof(pthread_mutex_t));
	data->pthread_philosophers = malloc(data->number_of_philosophers * sizeof(pthread_t));
	if(!data->philo_status || !data->forks   || !data->pthread_philosophers)
	{
		printf("\nMalloc showed error!\n");
		return(1);
	}
}