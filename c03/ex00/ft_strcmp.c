/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:57:11 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/23 11:46:43 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	scom;

	scom = 0;
	while (s1[scom] == s2[scom] && (s1[scom] != '\0' || s2[scom] != '\0'))
	{
		scom++;
	}
	return (s1[scom] - s2[scom]);
}

/* int	main()
{
	printf ("%d\n", ft_strcmp("Hardbass", "Hardbass!"));
	printf ("%d\n", ft_strcmp("Hardbass", "Hardbass"));
	printf ("%d\n", ft_strcmp("Hardbass!", "Hardbass"));
} */