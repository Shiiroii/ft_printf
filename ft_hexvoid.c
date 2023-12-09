/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 07:47:56 by lulm              #+#    #+#             */
/*   Updated: 2023/12/09 08:44:01 by lulm             ###   ########.fr       */
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

int	ft_hexvoid(unsigned long long i)
{
	int	j;

	j = ft_plength(i);
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
	j += write(1, "0x", 2);
	return (j);
}
