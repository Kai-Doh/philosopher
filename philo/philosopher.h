/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:12:11 by ktiomico          #+#    #+#             */
/*   Updated: 2025/03/23 20:44:24 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_H
# define PHILOSOPHER_H

# include <stdio.h>
# include <pthread.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>
# include <ctype.h>
# include <stdbool.h>
# include <limits.h>

# define MAX_PHILOS 200
# define STR_MAX_PHILOS "200"

# define RED	"\e[31m"
# define GREEN	"\e[32m"
# define PURPLE	"\e[35m"
# define CYAN	"\e[36m"
# define RESET	"\e[0m"

# define USAGE	"Usage: ./philo number_of_philo time_to_die[ms]\
 time_to_eat[ms] time_to_sleep[ms] Optional: [number_of_times_to_eat]"
# define PROGRAME "philo"
# define ERR_NUMBER "%s error: %s is not a number\n"
# define ERR_PHILO_NUM	"%s invalid input: \
the input should be between 1 and %s philosophers.\n"
# define ERR_DIGIT "%s invalid input: %s: \
not a valid unsigned integer between 0 and 2147483647.\n"

typedef struct s_data
{
	pthread_t		thread;
	pthread_mutex_t	*l_fork;
	pthread_mutex_t	*r_fork;
	pthread_mutex_t	*write_lock;
	pthread_mutex_t	*dead_lock;
	pthread_mutex_t	*meal_lock;
	size_t			id;
	size_t			eating;
	size_t			meals_ate;
	size_t			time_death;
	size_t			time_eat;
	size_t			time_sleep;
	size_t			meals;
	size_t			n_philo;
	size_t			n_time_eat;
	size_t			*dead;
}	t_data;

typedef struct s_program
{
	size_t			dead_flag;
	pthread_mutex_t	write_lock;
	pthread_mutex_t	dead_lock;
	pthread_mutex_t	meal_lock;
	t_data			*philo;
}	t_program;

int	msg(char *str, char *detail, int exit_no);
int	valid_args(int ac, char **av);

#endif
