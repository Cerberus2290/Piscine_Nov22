/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:25:27 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/23 11:47:10 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	sl;

	sl = 0;
	while (str[sl] != '\0')
	{
		sl++;
	}
	return (sl);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	st1;
	unsigned int	st2;
	unsigned int	lend;
	unsigned int	lens;

	st1 = 0;
	st2 = 0;
	while (dest[st2] != '\0')
	{
		st2++;
	}
	lend = st2;
	lens = ft_strlen(src);
	if (size == 0 || size <= lend)
		return (lens + size);
	while (src[st1] != '\0' && st1 < size - lend - 1)
	{
		dest[st2] = src[st1];
		st1++;
		st2++;
	}
	dest[st2] = '\0';
	return (lend + lens);
}

/* int	main()
{
	char	src[] = "Hell Yeah!";
	char	dest[] = "Say yeah ";
	printf ("%i \n", ft_strlcat(dest, src, 19));
	printf ("%s \n", dest);
} */