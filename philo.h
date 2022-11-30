/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:29:41 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/11/30 20:14:12 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <sys/time.h> 

typedef struct s_data
{
	int number_of_philosophers;
	int time_to_die;
	int	time_to_eat;
	int time_to_sleep;
	int number_of_times_each_philosopher_must_eat;	

	int *state;
}t_data;


int ft_atoi (char *str);
int ft_check_arg(int argc, char **argv);
int ft_initialize_data(t_data *data, char **argv);

long int  timestamp_in_ms (void);

#endif