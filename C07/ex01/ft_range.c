/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:19:32 by tkurukul          #+#    #+#             */
/*   Updated: 2024/11/05 10:40:34 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	pos;
	int	*array;

	i = min;
	while (i < max)
		i++;
	array = (int *)malloc(i * sizeof(int));
	if (array == NULL)
		return (0);
	if (min > max)
		return (array);
	i = min;
	pos = 0;
	while (i < max)
	{
		array[pos] = i;
		i++;
		pos++;
	}
	return (array);
}
/*
int	main(void)
{
	int	*a = ft_range(0, 10);
	if (a != NULL)
	{
		for (int i = 0; i < (10 - 0); i++) {
        		printf("%d ", a[i]);}
	}
	free(a);
}*/
