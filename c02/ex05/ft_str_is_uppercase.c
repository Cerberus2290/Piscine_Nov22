/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:10:48 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/20 18:56:48 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	siu;

	siu = 0;
	if (str[siu] == '\0')
	{
		return (1);
	}
	while (str[siu] != '\0')
	{
		if (str[siu] >= 'A' && str[siu] <= 'Z')
			siu++;
		else
			return (0);
	}
	return (1);
}

/* int	main()
{
	printf("The answer is: %d\n", ft_str_is_uppercase("ABCDEFG"));
	printf("The answer is: %d\n", ft_str_is_uppercase("A42BCDEFG"));
	printf("The answer is: %d\n", ft_str_is_uppercase(""));
} */