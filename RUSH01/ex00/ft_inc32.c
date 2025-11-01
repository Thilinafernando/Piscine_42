/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inc32.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:30:23 by vboselli          #+#    #+#             */
/*   Updated: 2024/10/27 08:30:26 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_in3colup(int a[2][2][4], int mat[4][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (a[0][0][k] == 2 && a[0][1][k] == 3)
		{
			mat[1][k] = 4;
		}
		k++;
	}
}

void	ft_in3coldo(int a[2][2][4], int mat[4][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (a[0][1][k] == 2 && a[0][0][k] == 3)
		{
			mat[2][k] = 4;
		}
		k++;
	}
}

void	ft_in3colle(int a[2][2][4], int mat[4][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (a[1][0][k] == 2 && a[1][1][k] == 3)
		{
			mat[k][1] = 4;
		}
		k++;
	}
}

void	ft_in3colri(int a[2][2][4], int mat[4][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (a[1][1][k] == 2 && a[1][0][k] == 3)
		{
			mat[k][2] = 4;
		}
		k++;
	}
}

void	ft_inc32(int a[2][2][4], int mat[4][4])
{
	ft_in3colup(a, mat);
	ft_in3coldo(a, mat);
	ft_in3colle(a, mat);
	ft_in3colri(a, mat);
}
