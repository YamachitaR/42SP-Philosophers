/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_think.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:22:02 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/11 21:51:29 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 

int ft_philo_think(t_philo *philo)
{
     // checar se esta vivo e que outos tb estejam vivo
        
     if(ft_print(philo, THINK))
          return (1);
    ft_print(philo, EAT);
     usleep(philo->time_die/2*1000);
     
     return(0);
}

