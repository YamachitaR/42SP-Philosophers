/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_fork.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:49:14 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/04 04:10:44 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 


void ft_take_fork(t_data *data)
{
   pthread_mutex_lock(&data->mutex);     //entrando na região crítica
    data->state[data->philo] = HUNGRY;            //setando filosofo i
    test(data->philo, data);                        //tentar pegar os dois garfos
    pthread_mutex_unlock(&data->mutex);   //saindo da região crítica
    pthread_mutex_lock(&data->forks[data->philo]); //bloqueando se os garfos não foram pegados
}
