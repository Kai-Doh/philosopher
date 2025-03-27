/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:56:58 by ktiomico          #+#    #+#             */
/*   Updated: 2025/03/27 17:09:53 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	msg(char *str, char *detail, int exit_no)
{
	if (!detail)
		printf(str, PROGRAME);
	else
		printf(str, PROGRAME, detail);
	return (exit_no);
}

long	ft_atoi(char *str)
{
	unsigned long long int	nb;
	int						i;

	i = 0;
	nb = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (nb > INT_MAX)
		return (-1);
	return ((long)nb);
}

void	*malloc_check(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr == NULL)
	{
		msg(RED ERR_MALLOC, NULL, EXIT_FAILURE);
	}
	return (ptr);
}

