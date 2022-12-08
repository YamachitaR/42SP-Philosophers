/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_fork.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 03:23:23 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/04 05:13:36 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void ft_put_fork(t_data *data)
{
    int fork_left;
    int fork_right;

    fork_left =  (data->philo +  data->number_of_philosophers - 1)% data->number_of_philosophers;
    fork_right=  (data->philo +  data->number_of_philosophers)% data->number_of_philosophers;
    
    pthread_mutex_unlock(&data->mutex); //entrando na região crítica
    data->state[data->philo] = THINK ;         //filosofo terminou de comer
    test(fork_left, data);             //ver se o vizinho da esquerda pode comer
    test(fork_right, data);              // ver se o vizinho da direita pode comer
    pthread_mutex_lock(&data->mutex);   //saindo da região crítica
  
}