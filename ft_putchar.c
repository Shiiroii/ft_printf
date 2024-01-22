/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 07:48:19 by lulm              #+#    #+#             */
/*   Updated: 2024/01/22 07:56:39 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}

int ft_putchar_len(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}
