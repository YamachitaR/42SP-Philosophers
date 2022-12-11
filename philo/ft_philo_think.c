/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_think.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:22:02 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/10 12:03:17 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 

int ft_philo_think(t_philo *philo)
{
     if(!ft_print(philo, THINK))
          return (1);
     usleep(philo->time_to_die/2);
     return(0);
}

