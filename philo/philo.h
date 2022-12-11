/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:29:41 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/11 04:28:33 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PHILO_H
# define PHILO_H

# include<pthread.h>
# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>
# include<sys/time.h>


# define FORK 1
# define EAT 2
# define SLEEP 3
# define THINK 4
# define DIED 5
# define FULL 6
# define DINNER 7


typedef struct s_philo
{
	int id;
	long  time_start;
	long time_meal;
	int amount_of_meal;

}t_philo;



typedef struct s_data
{
	int number_of_philosophers;
	int time_to_die;
	int	time_to_eat;
	int time_to_sleep;
	int number_of_times_each_philosopher_must_eat;	
}t_data;




long ft_atoi (char *str);  // ok
long  ft_time_epoch_in_ms (void); //ok
int ft_argv_check(int argc, char **argv); // ok
int ft_struct_init(t_data **data, char **argv);


 int ft_print(t_philo **philo, int flag);

 int ft_error_malloc(void);


#endif