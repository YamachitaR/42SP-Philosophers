/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:05:25 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/12 03:02:05 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 


void *ft_philo(void *arg)
{
    t_philo *philo;
    
    philo = (t_philo*)arg;
      
    while (1)     
    {
     
      if(ft_philo_eat(philo))
        return(NULL);
      if(ft_philo_sleep(philo))
        return(NULL);
      if(ft_philo_think(philo))
        return(NULL);
      usleep(10);
    }
    return(NULL);
}




