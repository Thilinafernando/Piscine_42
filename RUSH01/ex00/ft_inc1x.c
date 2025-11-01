/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inc1x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:30:23 by vboselli          #+#    #+#             */
/*   Updated: 2024/10/27 08:30:26 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_in1colup(int a[2][2][4], int mat[4][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (a[0][0][k] == 1)
		{
			mat[0][k] = 4;
		}
		k++;
	}
}

void	ft_in1coldo(int a[2][2][4], int mat[4][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (a[0][1][k] == 1)
		{
			mat[3][k] = 4;
		}
		k++;
	}
}

void	ft_in1colle(int a[2][2][4], int mat[4][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (a[1][0][k] == 1)
		{
			mat[k][0] = 4;
		}
		k++;
	}
}

void	ft_in1colri(int a[2][2][4], int mat[4][4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (a[1][1][k] == 1)
		{
			mat[k][3] = 4;
		}
		k++;
	}
}

void	ft_inc1x(int a[2][2][4], int mat[4][4])
{
	ft_in1colup(a, mat);
	ft_in1coldo(a, mat);
	ft_in1colle(a, mat);
	ft_in1colri(a, mat);
}
