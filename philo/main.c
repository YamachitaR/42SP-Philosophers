/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:29:31 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/11 18:03:27 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 

int main (int argc, char **argv)
{
	t_data *data;
	t_philo *philo;
	 
	if(ft_argv_check(argc, argv))
		return (1);
	if(ft_data_init(&data, argv))
		return (1);
	if(ft_philo_init(&philo, &data))
		return(1);
	if(ft_philo_pthread(philo, data))
		return(1);
	//ft_data_clean(&data);
	return(0);
}

// valgrind  --leak-check=full


/*
void ft_data_clean(t_data *data)
{

	pthread_t		*pthread;
	pthread_mutex_t	*forks;
	
}

*/