/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 03:00:38 by lionelulm         #+#    #+#             */
/*   Updated: 2024/01/26 03:00:42 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char	c = 'a';
	int		intd = 111111;
	int		inti = 222222;
	char	str[] = "Coucou, c'est moi !";

	ft_printf("Char: %c\n", c);
	ft_printf("Int d: %d\n", intd);
	ft_printf("Int i: %i\n", inti);
	ft_printf("String: %s\n", str);
	ft_printf("Tout: %c, %d, %i, %s, %%", c, intd, inti, str);

	return (0);
}

//à tester :
//voir si printf normal peut avoir plusieurs char à %c, voir si c'est diff.
//tester %p, %i (voir si diff à %d), %u, %x, %X, %%
//réparer i et d, ils ne devraient pas faire 97
