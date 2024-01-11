/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:01:04 by lulm              #+#    #+#             */
/*   Updated: 2024/01/11 08:39:03 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lowhexa(unsigned int nb)
{
	int	res;

	res = 0;
	if (nb >= 16)
		res += ft_lowhex(nb / 16);
	if (nb % 16 < 10)
		res += ft_putchar((nb % 16) + 48);
	else
		res += ft_putchar((nb % 16) + 87);
	return (res);
}

int	ft_uphexa(unsigned int nb)
{
	int	res;

	res = 0;
	if (nb >= 16)
		res += ft_uphex(nb / 16);
	if (nb % 16 < 10)
		res += ft_putchar((nb % 16) + 48);
	else
		res += ft_putchar((nb % 16) + 55);
	return (res);
}
