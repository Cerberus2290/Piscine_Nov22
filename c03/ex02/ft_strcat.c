/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:36:12 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/23 11:45:00 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	sc1;
	int	sc2;

	sc1 = 0;
	while (dest[sc1] != '\0')
	{
		sc1++;
	}
	sc2 = 0;
	while (src[sc2] != '\0')
	{
		dest[sc1] = src[sc2];
		sc1++;
		sc2++;
	}
	dest[sc1] = '\0';
	return (dest);
}

/* int main()
{
	char	src[] = "Hardbass";
	char	dest[] = "We are one - ";
	printf ("%s\n", ft_strcat (dest, src));
} */