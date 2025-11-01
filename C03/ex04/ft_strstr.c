/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:47:18 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/28 11:07:31 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 0;
	b = 0;
	while (to_find[a])
		a++;
	if (a == 0)
		return (str);
	while (str[i] != '\0')
	{
		b = 0;
		while (str[i + b] == to_find[b] && to_find[b])
		{
			b++;
		}
		if (b == a)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = {"hellwoworldggdhs"};
	char	to_find[] = {"world"};
	char	a = *ft_strstr(str, to_find);
	
	printf("%c", a);
}*/
