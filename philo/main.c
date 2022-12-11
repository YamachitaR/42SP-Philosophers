/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:29:31 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/11 04:30:13 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 

int main (int argc, char **argv)
{
	t_data *data;
	//t_philo philo;
	 
	if(ft_argv_check(argc, argv))
		return (1);
	if(ft_struct_init(&data, argv))
		return (1);
	//if(ft_philo_main(&data));
	//	return(1);
	printf("qunatidade de fisofoa %d",data->number_of_philosophers );
	free(data);
	return(0);
}





