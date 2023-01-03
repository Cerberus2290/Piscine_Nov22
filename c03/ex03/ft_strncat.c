/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:24:49 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/24 11:10:49 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	snc1;
	unsigned int	snc2;

	snc1 = 0;
	while (dest[snc1] != '\0')
	{
		snc1++;
	}
	snc2 = 0;
	while (snc2 < nb && src[snc2] != '\0')
	{
		dest[snc1 + snc2] = src[snc2];
		snc2++;
	}
	dest[snc1 + snc2] = '\0';
	return (dest);
}

/* int	main()
{
	char	src[] = "Hardbass";
	char	dest[] = "yeah ";
	printf ("%s\n", ft_strncat(dest, src, 8));
} */