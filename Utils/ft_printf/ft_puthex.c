/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:21:38 by toaktas           #+#    #+#             */
/*   Updated: 2023/07/11 12:21:39 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long long a)
{
	if (a >= 16)
	{
		ft_puthex(a / 16);
		ft_puthex(a % 16);
	}
	else
	{
		if (a <= 9)
			ft_putchar(a + '0');
		else
			ft_putchar((a - 10) + 'a');
	}
}
