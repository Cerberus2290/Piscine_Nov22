/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:37:09 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/24 09:38:11 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	sl;

	sl = 0;
	while (str[sl] != '\0')
	{
		sl++;
	}
	return (sl);
}

int	checkfailure(char *str)
{
	int	cf1;
	int	cf2;
	int	cf3;

	cf3 = ft_strlen(str);
	cf1 = 0;
	if (str[0] == '\0' || cf3 == 1)
		return (1);
	while (str[cf1] != '\0')
	{
		if (str[cf1] <= 32 || str[cf1] == 127
			|| str[cf1] == 43 || str[cf1] == 45)
			return (0);
		cf2 = cf1 + 1;
		while (cf2 < ft_strlen(str))
		{
			if (str[cf1] == str[cf2])
				return (0);
			cf2++;
		}
		cf1++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		strl;
	int		f;
	long	nb;

	f = checkfailure(base);
	strl = ft_strlen(base);
	nb = nbr;
	if (f == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < strl)
			ft_putchar(base[nb]);
		if (nb >= strl)
		{
			ft_putnbr_base(nb / strl, base);
			ft_putnbr_base(nb % strl, base);
		}
	}
}

/* int	main()
{
	ft_putnbr_base(-55, "0123456789");
	printf("\n");
	ft_putnbr_base(40, "01");
	printf("\n");
	ft_putnbr_base(894867, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(42, "poneyvif");
	printf("\n");
} */