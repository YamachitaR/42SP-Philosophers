/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_born_philosophers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:56:09 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/07 22:06:49 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 

static int ft_mutex_init(t_data *data);

int ft_born_philosopher(t_data *data)
{
	int status;
	if(ft_mutex_init(t_data *data))
		return(1);
	data->philo = -1;
	while(++data->philo  < data->number_of_philosophers)
	{
		status = pthread_create(&data->pthread_philosophers[data->philo ], NULL, ft_philosopher, (void *)data);
	    if (status != 0) 
        {
           printf("Pthread create returned error code %d\n", status);
            return (1);
        }
	}
	data->philo = -1;
	while(++data->philo < data->number_of_philosophers)
		pthread_join(data->pthread_philosophers[data->philo], NULL);
	return(0);
}

static int ft_mutex_init(t_data *data)
{
    int i;
  
    i = 0;
    while(i < data->number_of_philosophers)
    {
       if( pthread_mutex_init(&data->forks[i], NULL)); 
        {
            printf("\nMutex init showed error\n");
            return(1);
        }
        i ++;
    }
    pthread_mutex_init(data->mutex_print, NULL);
	pthread_mutex_init(data->mutex_dinner, NULL);
    return (0)
}