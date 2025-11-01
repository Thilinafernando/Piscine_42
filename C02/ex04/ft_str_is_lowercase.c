/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:37:53 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/22 16:52:37 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
			if (!(str[a] <= 122 && str[a] >= 97))
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
	char	str[] = {"hjgYa"};
	ft_str_is_lowercase(str);
	a = ft_str_is_lowercase(str);
	printf("%d", a);
}*/
