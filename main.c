/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:29:31 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/02 20:48:52 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 

int main (int argc, char **argv)
{
	t_data *data;
	 
	if(!ft_check_arg(argc, argv))
		return (1);

	data = (t_data *) malloc (sizeof(t_data));
	ft_initialize_data(data, argv);

	// 1 filosofo
	//data->number_of_philosophers = 1;
	

	ft_free_data(data);

	return(0);
}




