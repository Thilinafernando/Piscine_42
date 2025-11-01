/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:18:04 by tkurukul          #+#    #+#             */
/*   Updated: 2024/11/05 16:31:28 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	sepbl(char *result, char *sep, int *a)
{
	int	f;

	f = 0;
	while (sep[f] != '\0')
	{
		result[(*a)++] = sep[f++];
	}
}

char	*printing_block(char **strs, char *result, char *sep, int size)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	a = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			result[a++] = strs[i][j++];
		}
		if (i < size - 1)
		{
			sepbl(result, sep, &a);
		}
		i++;
	}
	result[a] = '\0';
	return (result);
}

int	ft_strlen(char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

int	counter(char **strs, int size)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (i < size)
	{
		counter = counter + ft_strlen(strs[i]);
		i++;
	}
	return (counter);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_length;

	total_length = counter(strs, size) + ft_strlen(sep) * (size - 1) + 1;
	result = (char *)malloc(total_length * sizeof(char));
	if (result == NULL)
		return (NULL);
	printing_block(strs, result, sep, size);
	return (result);
}
/*
int main(void) {
    char *sep = ", ";
    char *strs[] = {"Hello", "World", "!"};
    int i = 3;
    char *result = ft_strjoin(i, strs, sep);
    if (result) {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}*/
