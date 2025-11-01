/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:51:19 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/25 20:14:11 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[b] != '\0')
	{
		dest[i] = src[b];
		b++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[50] = {"hello"};
	char	src[] = {"world"};
	char	ec[] = {*ft_strcat(dest, src)};

	printf("%s", ec);
}*/
