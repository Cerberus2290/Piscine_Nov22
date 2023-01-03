/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:43:16 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/19 16:29:47 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	sl;

	sl = 0;
	while (str[sl] != '\0')
		sl++;
	return (sl);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	sc;
	unsigned int	ft;

	ft = ft_strlen(src);
	sc = 0;
	if (size != 0)
	{
		while (src[sc] != '\0' && sc < size - 1)
		{
			dest[sc] = src[sc];
			sc++;
		}
		dest[sc] = '\0';
	}
	return (ft);
}

/* int	main()
{
	char	src[] = "World!";
	char	dest[] = "Hello ";
	printf("%d | %s\n", ft_strlcpy(dest, src, 10), dest);
} */
