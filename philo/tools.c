/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:56:58 by ktiomico          #+#    #+#             */
/*   Updated: 2025/03/23 20:02:59 by ktiomico         ###   ########.fr       */
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
