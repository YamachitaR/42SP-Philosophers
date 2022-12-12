/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 05:34:29 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/11 20:57:13 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void ft_philo_value(t_philo *philo, t_data *data);
static void ft_philo_fork(t_philo *philo, t_data *data);

int ft_philo_init(t_philo **philo, t_data **data)
{
	*philo =  malloc (sizeof(t_philo) * (*data)->number_of_philosophers );
	if(!philo)
		return (ft_error_malloc());
    ft_philo_value(*philo,*data);
    ft_philo_fork(*philo, *data);
    return(0);
}

static void ft_philo_value(t_philo *philo, t_data *data)
{
    int i;
    
    i = -1;
    while(++ i < data->number_of_philosophers)
    {
        philo[i].id = i +1;
        philo[i].amount_meal = 0;
        philo[i].time_start = ft_time_epoch_in_ms();
        philo[i].time_meal = philo->time_start;
        philo[i].time_die = data->time_to_die;
        philo[i].time_eat = data->time_to_eat;
        philo[i].time_sleep = data->time_to_sleep;
        philo[i].max_eat = data->number_of_times_each_philosopher_must_eat;
        philo[i].status = &data->status;
        philo[i].mutex_status = &data->mutex_status;
        philo[i].mutex_print = &data->mutex_print;

    }
    
}


static void ft_philo_fork(t_philo *philo, t_data *data)
{
    int i;
    int left;
    int right;
    
    i = -1;
    while(++i <  data->number_of_philosophers)
    {
        right = i;
        left =(i + 1) % data->number_of_philosophers;
        if(data->number_of_philosophers > 1 && data->number_of_philosophers ==  i + 1 )
   		{
			philo[i].fork_first = &data->forks[right];
			philo[i].fork_second = &data->forks[left];
		}else
        {
            philo[i].fork_first = &data->forks[left];
			philo[i].fork_second = &data->forks[right];
        }

    }

}


