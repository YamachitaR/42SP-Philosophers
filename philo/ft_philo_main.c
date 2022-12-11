/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:56:09 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/11 00:59:11 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 

static int ft_mutex_init(t_data *data);

int ft_philo_main(t_data *data)
{
    // inicializar as duas struct

    // inicaliza as mutex
    // inicalizar philo  veja quem precisa inicializar primeiro 


    //pthread_create

    // fucao monitoramento 

    //pthread_joi

    // free nas duas struct
	if(ft_mutex_init(data))
		return(1);
	i =- 1;
	while(++i  < data->number_of_philosophers)
	{
	    if (pthread_create(&data->pthread[i], NULL, ft_philo, (void *)data))
            return (ft_error_pthread());
	}
	i = -1;
	while(++i< data->number_of_philosophers)
		pthread_join(data->pthread[i], NULL);
	return(0);
}

static int ft_mutex_init(t_data *data)
{
    int i;
  
    i = 0;
    while(i < data->number_of_philosophers)
    {
       if(pthread_mutex_init(&data->forks[i], NULL))
            return(ft_error_mutex());
        i ++;
    }
    pthread_mutex_init(&data->mutex_print, NULL);
	pthread_mutex_init(&data->mutex_dinner_status, NULL);
    pthread_mutex_init(&data-> mutex_get, NULL);
    
    return (0);  
}

