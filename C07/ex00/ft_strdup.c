/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:24:14 by tkurukul          #+#    #+#             */
/*   Updated: 2024/11/05 09:41:54 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*a;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	a = (char *)malloc((i + 1) * sizeof(char));
	if (a == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
/*
int	main(void)
{
	char	src[] = {"dupplicate"};
	char	*s = {ft_strdup(src)};
	if(s != NULL)
	{
		printf("%s", s);
		free(s);
	}
}*/
