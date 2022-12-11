/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:33:36 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/11 00:12:25 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long int	ft_mutex_get(long int *get, pthread_mutex_t *mutex)
{
	long int	temp;

	pthread_mutex_lock(mutex);
	temp = *get;
	pthread_mutex_unlock(mutex);
    return (get);
}

void ft_mutex_set(long int *nbr, pthread_mutex_t *mutex, long int value)
{
	pthread_mutex_lock(mutex);
	*nbr = value;
	pthread_mutex_unlock(mutex);
}
