/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:08:50 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/22 16:18:35 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
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
			if (!(str[a] <= '9' && str[a] >= '0'))
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
	char	str[] = {"000997657560a"};
	ft_str_is_numeric(str);
	a = ft_str_is_numeric(str);
	printf("%d", a);
}*/
