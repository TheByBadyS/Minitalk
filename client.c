/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:49:58 by toaktas           #+#    #+#             */
/*   Updated: 2023/07/11 12:19:49 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Utils/utils.h"

void	send_bit(int pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		i--;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
	{
		while (av[2][i] != '\0')
		{
			send_bit(ft_atoi(av[1]), av[2][i]);
			i++;
		}
	}
	return (EXIT_SUCCESS);
}
