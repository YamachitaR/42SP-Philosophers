/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_eat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 03:37:04 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/11 23:35:16 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int ft_philo_eat(t_philo *philo)
{
	pthread_mutex_lock(philo->fork_first);
	if(ft_print(philo, FORK))
    {
        pthread_mutex_unlock(philo->fork_first);   
        return(1);
    }   
	pthread_mutex_lock(philo->fork_second);
	if(ft_print(philo, FORK))
    {
        pthread_mutex_unlock(philo->fork_first);
	    pthread_mutex_unlock(philo->fork_second);   
        return(1);
    }
	if(ft_print(philo, EAT))
    {
        pthread_mutex_unlock(philo->fork_first);
        pthread_mutex_unlock(philo->fork_second);   
        return(1);
    }
     //atualiza o tempo  do janta 
     // atualiza a quantidade almoço 
    usleep(philo->time_eat * 1000);
    pthread_mutex_unlock(philo->fork_first);
	pthread_mutex_unlock(philo->fork_second);
    return(0);
}
