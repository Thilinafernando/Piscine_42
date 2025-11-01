/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:04:53 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/18 13:35:00 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printing_session(char d, char e, char f)
{
	if (d < e && e < f)
	{
		write (1, &d, 1);
		write (1, &e, 1);
		write (1, &f, 1);
		if (d != '7')
		{
			write (1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				printing_session(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
