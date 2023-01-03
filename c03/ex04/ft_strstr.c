/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:19:22 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/24 11:11:01 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	stst1;
	int	stst2;

	stst1 = 0;
	stst2 = 0;
	if (to_find[stst2] == '\0')
		return (str);
	while (str[stst1] != '\0')
	{
		while (str[stst1 + stst2] == to_find[stst2]
			&& str[stst1 + stst2] != '\0')
			stst2++;
		if (to_find[stst2] == '\0')
			return (str + stst1);
		stst1++;
		stst2 = 0;
	}
	return (0);
}

/* int	main()
{
	char	hay[] = "I sure hope the function can find Hardbass in this.";
	char	nee[] = "Hardbass";
	printf ("Found it!: %s\n", ft_strstr(hay, nee));
} */