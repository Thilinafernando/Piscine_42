/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:38:29 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/22 20:48:30 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	conditions(char *str, int a, int *b)
{
	if ((str[a] <= 122 && str[a] >= 97) && *b == 1)
	{
		str[a] -= 32;
		*b = 0;
	}
	else if (*b == 0 && (str[a] <= 90 && str[a] >= 65))
	{
		str[a] += 32;
	}
	else if (str[a] <= '9' && str[a] >= '0')
	{
		*b = 0;
	}
	else if (!((str[a] <= 90 && str[a] >= 65)
			|| (str[a] <= 122 && str[a] >= 97)
			|| (str[a] <= '9' && str[a] >= '0')))
	{
		*b = 1;
	}
	else
	{
		*b = 0;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (str[a] != '\0')
	{
		conditions(str, a, &b);
		a++;
	}
	return (str);
}

int main(void)
{
    char test1[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("%s", ft_strcapitalize(test1));

    return 0;
}
