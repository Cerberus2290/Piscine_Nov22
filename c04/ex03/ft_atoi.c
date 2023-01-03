/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:55:54 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/23 13:51:25 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	emptyspace (char *str, int *ptr_es)
{
	int	count;
	int	es;

	es = 0;
	count = 1;
	while ((str[es] >= 9 && str[es] <= 13) || str[es] == 32)
		es++;
	while ((str[es] == 43 || str[es] == 45))
	{
		if (str[es] == 45)
			count *= -1;
		es++;
	}
	*ptr_es = es;
	return (count);
}

int	ft_atoi(char *str)
{
	int	chara;
	int	concl;
	int	at;

	concl = 0;
	chara = emptyspace(str, &at);
	while (str[at] && str[at] >= 48 && str[at] <= 57)
	{
		concl *= 10;
		concl += str[at] - 48;
		at++;
	}
	concl *= chara;
	return (concl);
}

/* int	main()
{
	char	*s = "  ---+--+1234ab567";
	printf ("%d\n", ft_atoi (s));
} */