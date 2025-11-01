/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:33:35 by vboselli          #+#    #+#             */
/*   Updated: 2024/10/27 08:33:40 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	x_cond(int a[2][2][4])
{
	int	i;
	int	k;

	i = 0;
	while (i < 2)
	{
		k = 0;
		while (k < 4)
		{
			if ((a[i][0][k] + a[i][1][k]) > 5
			|| (a[i][0][k] + a[i][1][k]) < 3)
			{
				write(1, "Error", 5);
				return (0);
			}
			k++;
		}
		i++;
	}
	return (1);
}

int	check_condition(int a[2][2][4], int i, int j)
{
	int	k;
	int	cond;

	k = 0;
	cond = 0;
	while (k < 4)
	{
		cond = cond + a[i][j][k] / 4;
		if (cond > 1)
		{
			write(1, "Error", 5);
			return (0);
		}
		k++;
	}
	return (1);
}

int	l_cond(int a[2][2][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 2)
		{
			if (!check_condition(a, i, j))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strcc(int a[2][2][4])
{
	l_cond(a);
	x_cond(a);
	return (1);
}
