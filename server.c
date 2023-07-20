/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:49:51 by toaktas           #+#    #+#             */
/*   Updated: 2023/07/11 12:22:01 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Utils/utils.h"

void	signal_decode(int signum)
{
	static int	i = 7;
	static char	a;

	if (signum == SIGUSR1)
		a = a | 1 << i;
	else if (signum == SIGUSR2)
		a = a | 0 << i;
	i--;
	if (i < 0)
	{
		ft_printf("%c", a);
		a = 0;
		i = 7;
	}
}

int	main(void)
{
	struct sigaction	act;

	act.sa_flags = SA_SIGINFO;
	act.sa_handler = &signal_decode;
	ft_printf("PID: %d\n", getpid());
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
		pause();
	return (EXIT_SUCCESS);
}
