/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:49:54 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/20 17:05:30 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int	slc;

	slc = 0;
	while (str[slc] != 0)
	{
		if (str[slc] >= 'A' && str[slc] <= 'Z')
			str[slc] += 32;
		slc++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	sc;
	int	scf;

	sc = 0;
	scf = 1;
	ft_strlowercase(str);
	while (str[sc] != '\0')
	{
		if (str[sc] >= 'a' && str[sc] <= 'z')
		{
			if (scf == 1)
					str[sc] -= 32;
				scf = 0;
		}
		else if (str[sc] >= '0' && str[sc] <= '9')
			scf = 0;
		else
			scf = 1;
		sc++;
	}
	return (str);
}

/* int	main()
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	strd[] = "hallo, wie geht es dir ? 42zweiundvierzig; ein+und+fuenfzig";
	printf("%s\n", ft_strcapitalize(str));
	printf("%s\n", ft_strcapitalize(strd));
} */
