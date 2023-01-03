/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:34:00 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/19 13:44:50 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	sl;

	sl = 0;
	while (str[sl] != '\0')
	{
		if (str[sl] >= 'A' && str[sl] <= 'Z')
		{
			str[sl] += 32;
		}
		sl++;
	}
	return (str);
}

/* int main()
{
	char	str[] = "THISWASSALLLARGE";
	printf("Reducio!: %s\n", ft_strlowcase(str));
} */