/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:19:18 by tkurukul          #+#    #+#             */
/*   Updated: 2024/11/04 18:37:42 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	printing_block(char **a, int f)
{
	int	i;
	int	b;

	i = 1;
	while (i <= (f - 1))
	{
		b = 0;
		while (a[i][b] != '\0')
		{
			write(1, &a[i][b], 1);
			b++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (i <= (argc - 1))
		{
			j = i + 1;
			while (j <= (argc - 1))
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					ft_swap(&argv[i], &argv[j]);
				}
				j++;
			}
			i++;
		}
		printing_block(argv, argc);
	}
	return (0);
}
