/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:10:48 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/19 12:20:34 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	sil;

	sil = 0;
	if (str[sil] == '\0')
	{
		return (1);
	}
	while (str[sil] != '\0')
	{
		if (str[sil] >= 'a' && str[sil] <= 'z')
			sil++;
		else
			return (0);
	}
	return (1);
}

/* int	main()
{
	printf("The answer is: %d\n", ft_str_is_lowercase("abcdefg"));
	printf("The answer is: %d\n", ft_str_is_lowercase("a42bcdefg"));
	printf("The answer is: %d\n", ft_str_is_lowercase(""));
} */