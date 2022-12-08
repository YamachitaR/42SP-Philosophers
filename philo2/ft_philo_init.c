/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:21:13 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/07 18:14:50 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 

void ft_philo_init(t_data *data, t_philo *philo)
{
    philo->id =  data->philo_id;
	philo->time_last_meal= ft_time_epoch_in_ms();
	philo->amount_of_meal = 0
}