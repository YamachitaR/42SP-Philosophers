/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:36:49 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/02 21:38:14 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void ft_free_data(t_data *data)
{
    int i;
    
    pthread_mutex_destroy(&data->mutex);
	i = -1;
	while(++i < data->number_of_philosophers)
		 pthread_mutex_destroy(&data->forks[i]);
    free(data->state);
   free(data->forks);
   free(data->pthread_philosophers);
   free(data);
}
