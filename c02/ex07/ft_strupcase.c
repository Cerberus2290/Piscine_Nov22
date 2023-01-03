/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:57:09 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/19 13:24:30 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	su;

	su = 0;
	while (str[su] != '\0')
	{
		if (str[su] >= 'a' && str[su] <= 'z')
		{
			str[su] -= 32;
		}
		su++;
	}
	return (str);
}

/* int	main()
{
	char	str[] = "allofthiswaslowercase";
	printf("Engorgio!: %s\n", ft_strupcase(str));
} */
