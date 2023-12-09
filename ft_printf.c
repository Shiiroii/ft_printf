/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 07:35:19 by lulm              #+#    #+#             */
/*   Updated: 2023/12/09 08:36:17 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_argofprint(va_list arg, const char *ptr, int i)
{
	int	print;

	print = 0;
	if (ptr[i] == 'c')
		print += ft_putchar_fd(va_arg(arg, int));
	else if (ptr[i] == 's')
		print += ft_putstr_fd(va_arg(arg, char *));
	else if (ptr[i] == 'p')
	{
		print += write(1, "0x", 2);
		print += ft_hexvoid(va_arg(arg, unsigned long long int));
	}
	else if (ptr[i] == 'd')
	else if (ptr[i] == 'i')
	else if (ptr[i] == 'u')
	else if (ptr[i] == 'x')
	else if (ptr[i] == 'X')
	else if (ptr[i] == 's')
}

int	ft_printf(const char *, ...)
{

}
