/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:11:27 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/18 13:37:36 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	printing_module(char b, char c)
{
	char	g;
	char	f;
	char	h;
	char	i;

	g = (b / 10) + 48;
	f = (b % 10) + 48;
	h = (c / 10) + 48;
	i = (c % 10) + 48;
	write (1, &g, 1);
	write (1, &f, 1);
	write (1, " ", 1);
	write (1, &h, 1);
	write (1, &i, 1);
	if (!(g == '9' && f == '8' && h == '9' && i == '9'))
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a[2];

	a[0] = 0;
	while (a[0] < 99)
	{
		a[1] = a[0] + 1;
		while (a[1] < 100)
		{
			printing_module(a[0], a[1]);
			a[1]++;
		}
		a[0]++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
