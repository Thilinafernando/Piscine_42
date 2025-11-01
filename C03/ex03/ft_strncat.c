/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:19:41 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/25 20:32:01 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (dest[i])
		i++;
	while (a < nb && src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[50] = {"thatisit"};
	char	src[] = {"thatsnotit"};
	char	b[] = {ft_strncat(dest, src, 8};
	
	printf("%s", b);
}*/
