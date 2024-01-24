/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulm <lulm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 07:29:30 by lulm              #+#    #+#             */
/*   Updated: 2024/01/24 07:54:46 by lulm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

size_t	ft_strlen(const char *str);
int		ft_putchar(char c);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr(char *str);
int		ft_putstr_fd(char *s, int fd);
int		ft_putnbr(int nb);
int		ft_putnbr_fd(int nb, int fd);
int		ft_putnbr_unsdec(unsigned int nb);
int		ft_plength(unsigned long long int i);
int		ft_hexvoid(unsigned long long int i);
int		ft_lowhexa(unsigned int nb);
int		ft_uphexa(unsigned int nb);
int		ft_printf(const char *str, ...);

#endif
