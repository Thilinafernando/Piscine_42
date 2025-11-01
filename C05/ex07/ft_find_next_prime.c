/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:09:24 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/30 16:50:48 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	prime_finder(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb == 2147483647)
		return (2147483647);
	while (nb < 2147483647)
	{
		if (prime_finder(nb))
			return (nb);
		nb++;
	}
	return (0);
}
/*
int	main(void)
{
	int	a = ft_find_next_prime(24);
	printf("%d", a);
	return (0);
}*/
