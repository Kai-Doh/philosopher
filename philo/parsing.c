/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:40:56 by ktiomico          #+#    #+#             */
/*   Updated: 2025/03/27 14:56:42 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	parsing(t_data *data, char **av)
{
	data->nb_philo = ft_atoi(av[1]);
	data->time_to_die = ft_atoi(av[2]);
	data->time_to_eat = ft_atoi(av[3]);
	data->time_to_sleep = ft_atoi(av[4]);
	if (av[5])
		data->nb_meals = ft_atoi(av[5]);
	else
		data->nb_meals = -1;
	printf(GREEN"debugging verification of data parsing: nb_philo %ld time_to_die %ld time_to_eat %ld time_to_sleep %ld nb meals %ld\n", data->nb_philo, data->time_to_die,
		data->time_to_eat, data->time_to_sleep, data->nb_meals);
}
