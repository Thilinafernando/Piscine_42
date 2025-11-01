/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:03:41 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/22 18:06:46 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] <= 90) && (str[a] >= 65))
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = {"EHI CIAO"};
	char	pro[] = {ft_strlowcase(str)};
	ft_strlowcase(str);
	printf("%s",pro);
}*/
