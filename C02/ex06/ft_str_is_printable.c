/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:04:25 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/22 17:22:31 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
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
			if (!(str[a] <= 126 && str[a] >= 32))
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
	ft_str_is_printable(str);
	a = ft_str_is_printable(str);
	printf("%d", a);
}*/
