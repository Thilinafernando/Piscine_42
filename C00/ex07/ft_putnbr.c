/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 08:54:32 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/20 10:50:03 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	writ_bl(int a)
{
	char	b;

	if (a >= 10)
	{
		writ_bl(a / 10);
	}
	b = (a % 10) + 48;
	write (1, &b, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb <= 2147483647)
	{
		writ_bl(nb);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
}*/
