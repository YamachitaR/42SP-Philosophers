/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philosopher.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:05:25 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/07 19:35:14 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 

void *ft_philosopher(void *arg)
{
    t_data *data;
    t_philo *philo;

    data = (t_data*)arg;
    philo = (t_philo *) malloc (sizeof(t_philo));
    if(!philo)
    {
        printf("Error occurred in malloc!\n");
        return (NULL);
    }
   

    while (data->dinner_status == EATING)
    {
       // ft_think(data);          //filosofo começa a pensar
        //ft_take_fork(data);   //pega dois garfos da mesa
        //ft_eat(data);           //comendo
        //ft_put_fork(data); // coloca os dois garfos de volta na mesa
    }
    free(philo);
    return(NULL);
    
   
}
