/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philosopher.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:05:25 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/07 00:50:56 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 

void *ft_philosopher(void *philo)
{
    t_data *data;



    
    data = (t_data*)philo;



      //pthread_mutex_lock(&data->forks[data->philo]);
    //pthread_mutex_lock(&data->mutex);

    if(data->number_of_philosophers%2 == 0)
    {
      printf("oi");
       usleep(1100);
    }  
 
    while (1)
    {
        ft_think(data);          //filosofo começa a pensar
        ft_take_fork(data);   //pega dois garfos da mesa
        ft_eat(data);           //comendo
        ft_put_fork(data); // coloca os dois garfos de volta na mesa
    }
   // pthread_mutex_unlock(&data->mutex);
     // pthread_mutex_unlock(&data->forks[data->philo]);

    return(NULL);
    // pthread_exit(NULL); // nao permitido
    
}
