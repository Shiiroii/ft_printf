/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 07:35:19 by lulm              #+#    #+#             */
/*   Updated: 2024/01/18 08:02:52 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_argofprint(va_list arg, const char *ptr, int i)
{
	int	print;

	print = 0;
	if (ptr[i] == 'c')
		print += ft_putchar_fd(va_arg(arg, int), 1);
	else if (ptr[i] == 's')
		print += ft_putstr_fd(va_arg(arg, char *), 1);
	else if (ptr[i] == 'p')
		print += ft_hexvoid(va_arg(arg, unsigned long long int));
	else if (ptr[i] == 'd' || ptr[i] == 'i')
		print += ft_putnbr_fd(va_arg(arg, int), 1);
	else if (ptr[i] == 'u')
		print += ft_putnbr_unsdec(va_arg(arg, unsigned int), 1);
	else if (ptr[i] == 'x')
		print += ft_lowhexa(va_arg(arg, unsigned int));
	else if (ptr[i] == 'X')
		print += ft_uphexa(va_arg(arg, unsigned int));
	else if (ptr[i] == '%')
		print += ft_putchar('%');
	return (print);
}

void	ft_check(char str)
{
	if (str != 'c' && str != 's' && str != 'p' && str != 'd'
		&& str != 'i' && str != 'u' && str != 'x'
		&& str != 'X' && str != '%')

}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		u;
	va_list	arg;

	i = 0;
	u = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			str++;
			if (*str == NULL)
				return (i);
			if (*str == '-')
			{
				str++;

			}
		}
	}
}
