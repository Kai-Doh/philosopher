/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:11:12 by ktiomico          #+#    #+#             */
/*   Updated: 2025/03/21 20:21:07 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc < 5 || argc > 6)
	{
		printf("\033[1;31mUsage: philo t_die t_eat t_sleep meals\033[1;31m\n");
		return (1);
	}
	return (0);
}
