/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_time_epoch_in_ms.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:52:55 by ryoshio-          #+#    #+#             */
/*   Updated: 2022/11/30 21:11:15 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long int  ft_time_epoch_in_ms (void)
{
	struct timeval	tv;
	gettimeofday(&tv, NULL);
	return((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}
