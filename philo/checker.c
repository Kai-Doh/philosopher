/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:08:12 by ktiomico          #+#    #+#             */
/*   Updated: 2025/03/27 13:49:02 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static int	is_number(char *str);

int	valid_args(int ac, char **av)
{
	int	i;
	int	nb;

	i = 1;
	while (i < ac)
	{
		if (is_number(av[i]))
			return (msg(RED ERR_NUMBER RESET, av[i], EXIT_FAILURE));
		nb = ft_atoi(av[i]);
		if (i == 1 && (nb <= 0 || nb > MAX_PHILOS))
			return (msg(RED ERR_PHILO_NUM, STR_MAX_PHILOS, EXIT_FAILURE));
		if (i != 1 && (nb <= -1))
			return (msg(RED ERR_DIGIT, av[i], EXIT_FAILURE));
		i++;
	}
	return (0);
}

static int	is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
