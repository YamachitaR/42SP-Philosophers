/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:05:25 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/12/10 13:21:26 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h" 
static int ft_philo_one(t_data *data);

void *ft_philo(void *arg)
{
    t_data *data;
    
    data = (t_data*)arg;


    /*

    if (chegar se tem um fisofo == 1)
		return (ft_philo_one(data));
*/
    while (1)     
    {
       if(ft_philo_eat(data))
         return(NULL);
        if(ft_philo_sleep(data))
         return(NULL);
        if(ft_philo_think(data))
         return(NULL);
    }
    
    return(NULL);
}




