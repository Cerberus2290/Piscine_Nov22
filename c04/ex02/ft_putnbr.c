/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:24:16 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/23 10:33:00 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define INTMIN -2147483648

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == INTMIN)
	{
		ft_putchar ('-');
		ft_putchar ('2');
		ft_putnbr (147483648);
	}
	else if (nb < 0)
	{
		ft_putchar ('-');
		nb = -nb;
		ft_putnbr (nb);
	}
	else if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else
	{
		ft_putchar (nb + 48);
	}
}

/* int main()
{
	ft_putnbr (1337);
	ft_putchar ('\n');
} */
