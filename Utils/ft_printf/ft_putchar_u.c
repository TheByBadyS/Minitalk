/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:21:27 by toaktas           #+#    #+#             */
/*   Updated: 2023/07/11 12:21:28 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_u(unsigned int a)
{
	int		len;
	char	*num;

	len = 0;
	if (a == 0)
	{
		len += ft_putchar('0');
		return (len);
	}
	else
	{
		if ((int)a == -1)
			a = 4294967295;
		else
			a = 4294967295 + a;
	}	
	num = ft_uitoa(a);
	len += ft_putchar_s(num);
	free(num);
	return (len);
}
