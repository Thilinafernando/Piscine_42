/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:51:24 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/26 16:29:40 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_strcc(int (*a)[2][2][4]);
void	ft_inc41(int (*a)[2][2][4], int mat[4][4]);
void	ft_inc1x(int (*a)[2][2][4], int mat[4][4]);
void	ft_inc21(int (*a)[2][2][4], int mat[4][4]);
void	ft_inc32(int (*a)[2][2][4], int mat[4][4]);

int	(*ft_str2vet(char *str))[2][2][4]
{
	static int	a[2][2][4];
	int			i;
	int			c;

	i = 0;
	c = 0;
	while (str[i] && c < 16)
	{
		if (str[i] >= '1' && str[i] <= '9')
		{
			a[c / 8][(c % 8) / 4][c % 4] = (str[i] - '0');
			c++;
		}
		i++;
	}
	return (&a);
}

void	ft_gm(int mat[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			mat[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_in(char *str, int mat[4][4])
{
	static	int	(*a)[2][2][4];

	a = ft_str2vet(str);
	ft_strcc(a);
	ft_inc41(a, mat);
	ft_inc1x(a, mat);
	ft_inc21(a, mat);
	ft_inc32(a, mat);
}

void	stampa_mat(int mat[4][4])
{
	printf("%d %d %d %d\n", mat[0][0], mat[0][1], mat[0][2], mat[0][3]);
	printf("%d %d %d %d\n", mat[1][0], mat[1][1], mat[1][2], mat[1][3]);
	printf("%d %d %d %d\n", mat[2][0], mat[2][1], mat[2][2], mat[2][3]);
	printf("%d %d %d %d\n", mat[3][0], mat[3][1], mat[3][2], mat[3][3]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	mat[4][4];

	i = 0;
	while (i < 31)
	{
		if ((argv[1][i] < '1' || argv[1][i] > '4')
		|| (argv[1][i + 1] != ' ' && i != 30)
		|| (argv[1][31] != '\0'))
		{
			write(1, "Error", 5);
			return (0);
		}
		i = i + 2;
	}
	ft_gm(mat);
	ft_in(argv[1], mat);
	stampa_mat(mat);
	return (argc);
}
