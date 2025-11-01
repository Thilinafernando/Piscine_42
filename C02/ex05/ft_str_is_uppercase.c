/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:58:52 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/22 17:01:43 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[a] != '\0')
		{
			if (!(str[a] <= 90 && str[a] >= 65))
			{
				return (0);
			}
			a++;
		}
	}
	return (1);
}
/*
int	main(void)
{
	int	a;
	char	str[] = {"YYYYh"};
	ft_str_is_uppercase(str);
	a = ft_str_is_uppercase(str);
	printf("%d", a);
}*/
