/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:03:45 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/23 13:43:21 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	count;

	a = 0;
	count = 0;
	if (size > 0)
	{
		while (src[a] != '\0' && a < (size - 1))
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	while (src[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	char	str[] = "Ciaoo000000000";
	char	dest[15];
	unsigned int	size = 12;
	int	pro = ft_strlcpy(dest, str, size);

	ft_strlcpy(dest, str, size);
	printf("%s", dest);
	printf("%d", pro);
}*/
