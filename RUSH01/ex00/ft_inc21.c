/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inc21.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:30:23 by vboselli          #+#    #+#             */
/*   Updated: 2024/10/27 08:30:26 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_in2colup(int a[2][2][4], int mat[4][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (a[0][0][k] == 2 && a[0][1][k] == 1)
		{
			mat[0][k] = 3;
		}
		k++;
	}
}

void	ft_in2coldo(int a[2][2][4], int mat[4][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (a[0][1][k] == 2 && a[0][0][k] == 1)
		{
			mat[3][k] = 3;
		}
		k++;
	}
}

void	ft_in2colle(int a[2][2][4], int mat[4][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (a[1][0][k] == 2 && a[1][1][k] == 1)
		{
			mat[k][0] = 3;
		}
		k++;
	}
}

void	ft_in2colri(int a[2][2][4], int mat[4][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (a[1][1][k] == 2 && a[1][0][k] == 1)
		{
			mat[k][3] = 3;
		}
		k++;
	}
}

void	ft_inc21(int a[2][2][4], int mat[4][4])
{
	ft_in2colup(a, mat);
	ft_in2coldo(a, mat);
	ft_in2colle(a, mat);
	ft_in2colri(a, mat);
}
