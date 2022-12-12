/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:05:25 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/11 23:29:59 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 


void *ft_philo(void *arg)
{
    t_philo *philo;
    
    philo = (t_philo*)arg;



  
  //  if(philo->id %2 == 0)
  //       {
         
  //          ft_mutex_set(philo->status, philo->mutex_status , EAT);

        
  //       ft_print(philo, EAT);
    
  //         usleep(1000);
  //       }else
  //          ft_print(philo, SLEEP);
      
    while (1)     
    {
      
     
   
      if(ft_philo_eat(philo))
        return(NULL);
      if(ft_philo_sleep(philo))
        return(NULL);
      if(ft_philo_think(philo))
        return(NULL);
  
    }
    
    return(NULL);
}




