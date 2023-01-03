/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:34:31 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/23 09:43:43 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	slen;

	slen = 0;
	while (str[slen] != '\0')
	{
		slen++;
	}
	return (slen);
}

/* int	main()
{
	char	str[] = "How long is this string?";
	printf("I'm counting this many strings: %d\n", ft_strlen(str));
} */