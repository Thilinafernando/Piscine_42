/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:40:48 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/22 16:07:26 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
			if (!((str[a] <= 90 && str[a] >= 65)
					|| (str[a] <= 122 && str[a] >= 97)))
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
	char	str[] = {"ciaoooooooo0"};
	ft_str_is_alpha(str);
}*/
