/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philosopher.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:05:25 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/02 20:25:00 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 

void *ft_philosopher(void *philo)
{
    t_data *data;

    data = (t_data*)philo;
   // pthread_mutex_lock(&data->mutex);
 
    printf("%d",  data->philo);
    //pthread_mutex_unlock(&data->mutex);
    

    return(NULL);
    //pthread_exit(NULL); // nao permitido
    
}
