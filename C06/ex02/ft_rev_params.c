/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:32:31 by tkurukul          #+#    #+#             */
/*   Updated: 2024/11/04 16:40:37 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		while (argc > 1)
		{
			i = 0;
			while (argv[argc - 1][i] != '\0')
			{
				write(1, &argv[argc - 1][i], 1);
				i++;
			}
			write(1, "\n", 1);
			argc--;
		}
	}
	return (0);
}
