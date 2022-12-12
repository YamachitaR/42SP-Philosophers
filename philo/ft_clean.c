/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 06:56:59 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/12 07:00:55 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 

int ft_clean(&data, &philo)
{
        int i;
    
    pthread_mutex_destroy(&data->mutex_print);
    pthread_mutex_destroy(&data->mutex_dinner_status);
    pthread_mutex_destroy(&data->mutex_data);
	i = -1;
	while(++i < data->number_of_philosophers)
		 pthread_mutex_destroy(&data->forks[i]);
    free(data->forks);
    free(data->pthread_philosophers);
    free(data);
}



typedef struct s_philo
{

	pthread_mutex_t	*fork_first;
	pthread_mutex_t	*fork_second;
	pthread_mutex_t	*mutex_print;
	pthread_mutex_t mutex_philo;
	pthread_mutex_t mutex_time;
}t_philo;
