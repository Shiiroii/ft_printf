/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:01:04 by lulm              #+#    #+#             */
/*   Updated: 2024/01/11 08:34:14 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lowhexa(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 16)
		i += ft_lowhex(nb / 16);
	if (nb % 16 < 10)
		i += ft_putchar((nb % 16) + 48);
	else
		i += ft_putchar((nb % 16) + 87);
	return (i);
}

int	ft_uphexa(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 16)
		i += ft_uphex(nb / 16);
	if (nb % 16 < 10)
		i += ft_putchar((nb % 16) + 48);
	else
		i += ft_putchar((nb % 16) + 55);
	return (i);
}
