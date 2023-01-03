/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:57:23 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/19 12:08:37 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	sin;

	sin = 0;
	if (str[sin] == '\0')
	{
		return (1);
	}
	while (str[sin] != '\0')
	{
		if (str[sin] >= '0' && str[sin] <= '9')
			sin++;
		else
			return (0);
	}
	return (1);
}

/* int	main()
{
	printf("The answer is: %d\n", ft_str_is_numeric("0123456789"));
	printf("The answer is: %d\n", ft_str_is_numeric("0a1B23456789"));
	printf("The answer is: %d\n", ft_str_is_numeric(""));
} */