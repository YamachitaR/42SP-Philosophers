/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 03:03:23 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/04 06:17:35 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"


void test(int i, t_data *data) 
{
    int fork_left;
    int fork_right;

    
    fork_left =  (i +  data->number_of_philosophers - 1)% data->number_of_philosophers;
    fork_right=  (i +  data->number_of_philosophers)% data->number_of_philosophers;
    if (data->state[i] == HUNGRY && data->state[fork_left] != EATING && data->state[fork_right] != EATING) 
    {
        data->state[i] = EATING;
        pthread_mutex_unlock(&data->forks[i]);
    }
}
