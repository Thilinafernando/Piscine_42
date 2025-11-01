/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:32:47 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/30 12:03:08 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	while (i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (ft_sqrt(nb)))
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	a = ft_is_prime(2);

	printf("%d", a);
}*/
