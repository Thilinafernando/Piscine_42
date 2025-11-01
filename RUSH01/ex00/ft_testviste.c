/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:29:02 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/27 15:29:09 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	vistelem(int vet[4])
{
	int	i;
	int	count;
	int	max;

	max = 0;
	i = 0;
	count = 0;
	while (i < 4)
	{
		if (vet[i] > max)
		{
			count++;
			max = vet[i];
		}
		i++;
	}
	return (count);
}

int	sommaelem(int vet[4])
{
	if (vet[0] == vet[1] || vet[0] == vet[2]
		|| vet[0] == vet[3] || vet[1] == vet[2]
		|| vet[1] == vet[3] || vet[2] == vet[3])
	{
		return (0);
	}
	return (1);
}
