/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 07:47:56 by lulm              #+#    #+#             */
/*   Updated: 2024/01/29 08:02:24 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_plength(unsigned long long int i)
{
	int	j;

	j = 0;
	if (i == 0)
		j++;
	while (i != 0)
	{
		i = i / 16;
		j++;
	}
	return (j);
}

void	ft_hex(unsigned long long i)
{
	if (i >= 16)
	{
		ft_hexvoid(i / 16);
		ft_hexvoid(i % 16);
	}
	else
	{
		if (i < 10)
			ft_putchar(i + '0');
		else
			ft_putchar((i - 10) + 'a');
	}
}

int	ft_hexvoid(unsigned long long n)
{
	int	i;
	int	len;

	i = 0;
	len = ft_putstr("0x");
	if (len < 0)
		return (-1);
	else
		i += len;
	if (n == 0)
	{
		if (putchar('0') < 0)
			return (-1);
		i++;
	}
	else
		ft_hex(n);
	return (ft_plength(n) + i);
}
