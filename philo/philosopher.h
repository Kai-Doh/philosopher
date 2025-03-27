/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:12:11 by ktiomico          #+#    #+#             */
/*   Updated: 2025/03/27 15:39:59 by ktiomico         ###   ########.fr       */
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
# define ERR_MALLOC "%s error: malloc failed\n"

typedef struct s_philo	t_philo;
typedef struct s_fork	t_fork;

typedef struct s_data
{
	long	nb_philo;
	long	time_to_die;
	long	time_to_eat;
	long	time_to_sleep;
	long	nb_meals;
	long	start_simulation;
	bool	end_simulation;
	t_philo	*philos;
	t_fork	*forks;
}	t_data;

typedef struct s_fork
{
	pthread_mutex_t	*fork;
	int				id_fork;
}	t_fork;

typedef struct s_philo
{
	int				id;
	long			counter;
	bool			full;
	long			last_meal;
	t_fork			*left_fork;
	t_fork			*right_fork;
	t_data			*data;
	pthread_t		thread_id;
}	t_philo;

typedef enum e_state
{
	LOCK,
	UNLOCK,
	INIT,
	DESTROY,
	CREATE,
	JOIN,
	DETACH,
}	t_state;

int		msg(char *str, char *detail, int exit_no);
int		valid_args(int ac, char **av);
long	ft_atoi(char *str);
void	parsing(t_data *data, char **av);
void	*malloc_check(size_t size);
void	data_init(t_data *data);
#endif
