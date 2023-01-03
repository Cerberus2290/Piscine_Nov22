/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:46:24 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/16 16:51:28 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*(str + c) != '\0')
	{
		c++;
	}
	return (c);
}

/* int	main()
{
	char	str[] = "Hardbass";
	int	w;
	w = ft_strlen(str);
	printf("I counted. Your word has %d characters in its string.\n", w)
} */