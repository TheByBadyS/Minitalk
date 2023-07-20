/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:21:22 by toaktas           #+#    #+#             */
/*   Updated: 2023/07/11 12:21:24 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_s(char *c)
{
	int	len;
	int	a;

	a = 0;
	len = 0;
	if (c == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (c[a] != '\0')
	{
		write (1, &c[a++], 1);
		len++;
	}
	return (len);
}
