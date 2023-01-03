/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:34:23 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/19 12:56:02 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	sip;

	sip = 0;
	if (str[sip] == '\0')
	{
		return (1);
	}
	while (str[sip] != '\0')
	{
		if (str[sip] >= 32 && str[sip] <= 126)
			sip++;
		else
			return (0);
	}
	return (1);
}

/* int	main()
{
	printf("The answer is: %d\n", ft_str_is_printable("abcdefg!%"));
	printf("The answer is: %d\n", ft_str_is_printable("\n42\t"));
	printf("The answer is: %d\n", ft_str_is_printable(""));
} */