/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_monitoring.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:27:05 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/12 04:49:25 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "philo.h"
static void ft_update_status(t_philo *philo, int size);
int  ft_monitoring(t_philo *philo, int size, long int time_life)
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
            return(0);
        if(ft_time_epoch_in_ms() - ft_mutex_get_time(&philo[i].time_meal ,
            &philo[i].mutex_philo ) > time_life)
            {
                ft_update_status(philo,size);
                return(ft_print(philo, DIED));
            }
        i++;
        if(i == size)
        {
            count_philo_enough =0;
            i = 0;
        }
      usleep(96);
    }
    return (0);
}

static void ft_update_status(t_philo *philo, int size)
{
    int i;
    i = 0; 
     while(i< size)
    {
        ft_mutex_set(&philo[i].status, &philo[i].mutex_philo, OFF);

        i ++;
    }
}