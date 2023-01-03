/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:38:39 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/19 10:00:21 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	sc;

	sc = 0;
	while (src[sc] != '\0')
	{
		dest[sc] = src[sc];
		sc++;
	}
	dest[sc] = '\0';
	return (dest);
}

/* int	main()
{
	char src[] = "Hardbass";
	char dest[] = "";
	printf("%s\n", ft_strcpy(dest, src));
} */