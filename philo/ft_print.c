/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 03:45:04 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/11 00:11:53 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 

 int ft_print(t_philo *philo, int flag)
 {
    long int timestam;

    timestam =  ft_time_epoch_in_ms() - philo->time_start;
   
    if (flag == FORK)
		  printf("%5ld %3d has taken a fork\n", timestam  , philo->id);
    else if(flag == EAT)
      printf("%5ld %3d is eating\n",timestam  , philo->id);
    else if (flag == SLEEP)
		  printf("%5ld %3d is sleeping\n", timestam , philo->id);
    else if(flag == THINK)
      printf("%5ld %3d is thinking\n", timestam , philo->id);
    else if (flag == DIED)
		  printf("%5ld %3d died\n", timestam , philo->id);
    return(0);
 }

 
		
	
