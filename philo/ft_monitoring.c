/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_monitoring.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:27:05 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/11 22:29:05 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "philo.h"
void *ft_monitoring(t_philo *philo, int size)
{
    int i;

    
    while(1)
    {
        i =0;
    while(i< size)
    {
    
      
        if( ft_mutex_get(philo[i].status , philo[i].mutex_status)       != DINNER)
        {
            
             ft_print(&philo[i], DIED);
             return(NULL);
        }
      
           
        i++;
       usleep(100);

    }
    usleep(100);

    }
    return (NULL);
}
