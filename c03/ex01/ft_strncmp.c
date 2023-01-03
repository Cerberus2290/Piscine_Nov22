/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:20:37 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/24 11:05:56 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	snc;

	snc = 0;
	while ((s1[snc] != '\0' || s2[snc] != '\0') && snc < n)
	{
		if (s1[snc] > s2[snc])
		{
			return (1);
		}
		else if (s1[snc] < s2[snc])
		{
			return (-1);
		}
		snc++;
	}
	return (0);
}

/* int main()
{
	printf ("%d\n", ft_strncmp("Hardbass", "We are one", 10));
	printf ("%d\n", ft_strncmp("Hardbass", "Hardbass", 4));
	printf ("%d\n", ft_strncmp("Hardbass!", "Hardbass", 10));
} */
