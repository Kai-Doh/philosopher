/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:09:34 by ktiomico          #+#    #+#             */
/*   Updated: 2025/03/27 17:15:41 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	mutex_handling(pthread_mutex_t *mtx, t_state state)
{
	if (state == UNLOCK)
		pthread_mutex_unlock(mtx);
	else if (state == LOCK)
		pthread_mutex_lock(mtx);
	else if (state == INIT)
		pthread_mutex_init(mtx, NULL);
	else if (state == DESTROY)
		pthread_mutex_destroy(mtx);
	else
		msg(RED "Error: mutex handling failed\n", NULL, EXIT_FAILURE);
}

void	thread_handling(pthread_t *thread, void *(*foo)(void *),
	void *data, t_state state)
{
	if (state == CREATE)
		pthread_create(thread, NULL, foo, NULL);
	else if (state == JOIN)
		pthread_join(*thread, NULL);
	else if (state == DETACH)
		pthread_detach(*thread);
	else
		msg(RED "Error: thread handling failed\n", NULL, EXIT_FAILURE);
}
{

}
