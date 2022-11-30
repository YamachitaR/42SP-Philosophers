/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_time_ms.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:28:18 by lorenuar          #+#    #+#             */
/*   Updated: 2022/11/29 22:14:30 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

// retorna o tempo
t_time	get_time_ms(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);// estuda um pouco 
	return ((tv.tv_sec) * 1000LL + (tv.tv_usec) / 1000);
}
