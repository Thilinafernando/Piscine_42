/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inc41.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:30:23 by vboselli          #+#    #+#             */
/*   Updated: 2024/10/27 08:30:26 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_in4colup(int a[2][2][4], int mat[4][4])
{
	int	k;
	int	x;

	k = 0;
	while (k < 4)
	{
		if (a[0][0][k] == 4)
		{
			x = 0;
			while (x < 4)
			{
				mat[x][k] = x + 1;
				x++;
			}
		}
		k++;
	}
}

void	ft_in4coldo(int a[2][2][4], int mat[4][4])
{
	int	k;
	int	x;

	k = 0;
	while (k < 4)
	{
		if (a[0][1][k] == 4)
		{
			x = 3;
			while (x >= 0)
			{
				mat[x][k] = 4 - x;
				x--;
			}
		}
		k++;
	}
}

void	ft_in4colle(int a[2][2][4], int mat[4][4])
{
	int	k;
	int	y;

	k = 0;
	while (k < 4)
	{
		if (a[1][0][k] == 4)
		{
			y = 0;
			while (y < 4)
			{
				if (mat[k][y] == 0)
				{
					mat[k][y] = y + 1;
				}
				y++;
			}
		}
		k++;
	}
}

void	ft_in4colri(int a[2][2][4], int mat[4][4])
{
	int	k;
	int	y;

	k = 0;
	while (k < 4)
	{
		if (a[1][1][k] == 4)
		{
			y = 3;
			while (y >= 0)
			{
				if (mat[k][y] == 0)
				{
					mat[k][y] = 4 - y;
				}
				y--;
			}
		}
		k++;
	}
}

void	ft_inc41(int a[2][2][4], int mat[4][4])
{
	ft_in4colup(a, mat);
	ft_in4coldo(a, mat);
	ft_in4colle(a, mat);
	ft_in4colri(a, mat);
}
