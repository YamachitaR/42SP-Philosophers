/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:29:41 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/07 00:52:34 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PHILO_H
# define PHILO_H

# include<pthread.h>//thread
# include<unistd.h>//write
# include<stdlib.h>//malloc
# include<stdio.h>//printf
# include<sys/time.h>



# define EATING 1
# define SLEEP 2
# define THINK 3
# define HUNGRY 4
# define DIED 5


typedef struct s_data
{
	int number_of_philosophers;
	int time_to_die;
	int	time_to_eat;
	int time_to_sleep;
	int number_of_times_each_philosopher_must_eat;	
	
	pthread_t		*pthread_philosophers;
	pthread_mutex_t	*forks;
	pthread_mutex_t	mutex;
	int philo;
	int *state;
	long int *timestam;
}t_data;


int ft_atoi (char *str);
int ft_check_arg(int argc, char **argv);
int ft_initialize_data(t_data *data, char **argv);

long int  ft_time_epoch_in_ms (void);

void ft_think(t_data *data);
void test(int i, t_data *data);
void ft_put_fork(t_data *data);
void ft_take_fork(t_data *data);
void ft_eat(t_data *data);

void *ft_philosopher(void *philo);
void ft_free_data(t_data *data);

#endif