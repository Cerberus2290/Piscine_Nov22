/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:53:52 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/28 13:21:44 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	a;
	int	b;

	a = ac - 1;
	while (a > 0)
	{
		b = 0;
		while (av[a][b] != '\0' && ac)
		{
			ft_putchar(av[a][b]);
			b++;
		}
		ft_putchar('\n');
		a--;
	}
	return (0);
}
