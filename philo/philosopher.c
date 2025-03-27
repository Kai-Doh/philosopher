/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:11:12 by ktiomico          #+#    #+#             */
/*   Updated: 2025/03/27 15:03:11 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	main(int ac, char **av)
{
	t_data	data;

	(void)av;
	if (ac - 1 < 4 || ac - 1 > 5)
		return (msg(RED USAGE RESET, NULL, EXIT_FAILURE));
	if (valid_args(ac, av) == 1)
		return (1);
	parsing(&data, av);
	data_init(&data);
	return (0);
}
