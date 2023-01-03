/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:04:42 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/19 11:51:07 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	sia;

	sia = 0;
	if (str[sia] == '\0')
	{
		return (1);
	}
	while (str[sia] != '\0')
	{
		if ((str[sia] >= 'A' && str[sia] <= 'Z')
			|| (str[sia] >= 'a' && str[sia] <= 'z'))
			sia++;
		else
			return (0);
	}
	return (1);
}

/* int	main()
{
	printf("%d\n", ft_str_is_alpha("abcdefghijkl"));
	printf("%d\n", ft_str_is_alpha("abc1defghijkl"));
} */