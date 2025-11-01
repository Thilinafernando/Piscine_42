/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:34:14 by tkurukul          #+#    #+#             */
/*   Updated: 2024/11/05 15:17:15 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	b;

	if (min >= max)
		return (0);
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = min;
	b = 0;
	while (i < max)
	{
		(*range)[b] = i;
		i++;
		b++;
	}
	return (max - min);
}
/*
int	main(void)
{
    int *array;
    int size;
    int min = 5;
    int max = 10;

    size = ft_ultimate_range(&array, min, max);
        for (int i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");
	printf("Array of size %d:\n", size);
    if (size > 0)
        free(array);

    return 0;
}*/
