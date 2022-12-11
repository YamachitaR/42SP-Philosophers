/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 02:03:44 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/11 04:29:12 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void ft_argv_to_data(t_data *data, char **argv);

int ft_struct_init(t_data **data, char **argv)
{
	*data =  malloc (sizeof(t_data));
	if(!data)
		return (ft_error_malloc());
	ft_argv_to_data(*data, argv);
	return(0);
}

static void ft_argv_to_data(t_data *data, char **argv)
{
	data->number_of_philosophers = ft_atoi(argv[1]);
	data->time_to_die = ft_atoi(argv[2]);
	data->time_to_eat = ft_atoi(argv[3]);
	data->time_to_sleep = ft_atoi(argv[4]);
	data->number_of_times_each_philosopher_must_eat = -1;
	if(argv[5])
		data->number_of_times_each_philosopher_must_eat = ft_atoi(argv[5]);
}
