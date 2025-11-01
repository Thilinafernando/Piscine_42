/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:28:33 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/28 18:03:27 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	c;

	i = 0;
	a = 0;
	c = 0;
	while (src[c])
		c++;
	while (dest[i])
		i++;
	if (size - i < 1)
		return (size + c);
	while (a + i < (size - 1) && src[a])
	{
		dest[i] = src[a];
		a++;
		i++;
	}
	dest[i] = '\0';
	return (i + c);
}
/*
int main(void) {
    char dest[20] = "Hello";
    char src[] = "world!";
    unsigned int size = 15;

    unsigned int result = ft_strlcat(dest, src, size);

    printf("Resulting string: '%s'\n", dest);
    printf("Total length: %u\n", result);

    return 0;
}*/
