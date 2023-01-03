/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:05:09 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/19 11:01:52 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	snc;

	snc = 0;
	while (src[snc] != '\0' && snc < n)
	{
		dest[snc] = src[snc];
		snc++;
	}
	while (snc < n)
	{
		dest[snc] = '\0';
		snc++;
	}
	return (dest);
}

/* int	main()
{
	char src[] = "We are one";
	char dest[] = "Hardbass!!";
	
	printf("%s", ft_strncpy(dest, src, 0));
	printf("\n%s", ft_strncpy(dest, src, 2));
	printf("\n%s", ft_strncpy(dest, src, 6));
	printf("\n%s\n", ft_strncpy(dest, src, 10));
} */