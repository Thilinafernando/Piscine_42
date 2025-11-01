/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:06:38 by tkurukul          #+#    #+#             */
/*   Updated: 2024/10/22 11:58:01 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0' )
	{
		if (src[c] >= 'a' && src[c] <= 'z')
			dest[c] = src[c];
		c++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[15];
	char	src[] = {"ciao mondo"};

	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0) ;
}*/
