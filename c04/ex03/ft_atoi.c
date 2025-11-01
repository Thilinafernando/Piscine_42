/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:42:37 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/29 10:12:43 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	results;
	int	negative;

	results = 0;
	i = 0;
	negative = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			negative++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		results = (results * 10) + (str[i] - 48);
		i++;
	}
	if (!((negative % 2) == 0))
	{
		results = results * (-1);
	}
	return (results);
}
/*
int	main(void)
{
	char	str[] = {"	 \n---+--+1234ab567"};
	int 	t = ft_atoi(str);

	printf("%d", t);
}*/
