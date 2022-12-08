/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:29:41 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/07 22:08:34 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PHILO_H
# define PHILO_H

# include<pthread.h>
# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>
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
	pthread_mutex_t	mutex_print;
	pthread_mutex_t mutex_dinner_status;
	pthread_mutex_t mutex_philo_status;
	
	int philo_id;
	int *philo_status;
	int dinner_status;

}t_data;


typedef struct s_philo
{
	int id;
	long int time_last_meal;
	int amount_of_meal;
}t_philo;


long int ft_atoi (char *str);  // ok
int ft_check_arg(int argc, char **argv); // pk
int ft_data_init(t_data *data, char **argv)
long int  ft_time_epoch_in_ms (void); //ok

void ft_think(t_data *data);
void test(int i, t_data *data);
void ft_put_fork(t_data *data);
void ft_take_fork(t_data *data);
void ft_eat(t_data *data);
//int ft_born_philosopher(t_data *data);

void *ft_philosopher(void *philo);
void ft_free_data(t_data *data);
void ft_philo_init(t_data *data, t_philo *philo);
#endif