/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_monitoring.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:27:05 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/12 03:02:58 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "philo.h"
void *ft_monitoring(t_philo *philo, int size)
{
    int i;
    int count_philo_enough;

    i =0;
    count_philo_enough = 0;
    while(i< size)
    {
        if( ft_mutex_get(&philo[i].status, &philo[i].mutex_philo)== FULL)
            count_philo_enough ++;
        if(count_philo_enough == size)
            return(NULL);
        i++;
        if(i == size)
        {
            count_philo_enough =0;
            i = 0;
            
        }
       usleep(10);

    }
  
    return (NULL);
}
