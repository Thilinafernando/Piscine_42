/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:39:38 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/22 18:01:16 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] <= 122) && (str[a] >= 97))
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = {"ehi ciao"};
	char	pro[] = {ft_strupcase(str)};
	ft_strupcase(str);
	printf("%s",pro);
}*/
