/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:25:11 by ktiomico          #+#    #+#             */
/*   Updated: 2025/03/27 15:43:52 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static void	forks_init(t_philo *philo, t_fork *forks, int pos);

void	data_init(t_data *data)
{
	int		i;
	t_philo	*philo;

	i = -1;
	data->end_simulation = false;
	data->philos = malloc_check(sizeof(t_philo) * data->nb_philo);
	data->forks = malloc_check(sizeof(t_fork) * data->nb_philo);
	while (++i < data->nb_philo)
	{
		philo = data->philos + i;
		philo->id = i + 1;
		philo->full = false;
		philo->counter = 0;
		philo->data = data;
		forks_init(philo, data->forks, i);
	}
}

static void	forks_init(t_philo *philo, t_fork *forks, int pos)
{
	long	nb_philo;

	nb_philo = philo->data->nb_philo;
	philo->left_fork = &forks[pos];
	philo->right_fork = &forks[(pos + 1) % nb_philo];
	if (philo->id % 2)
	{
		philo->left_fork = &forks[pos];
		philo->right_fork = &forks[(pos + 1) % nb_philo];
	}
}
