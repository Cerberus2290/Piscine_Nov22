/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 09:11:19 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/28 11:04:48 by tstrassb         ###   ########.fr       */
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

	b = 1;
	while (b < ac)
	{
		a = 0;
		while (av[b][a] != '\0')
		{
			ft_putchar(av[b][a]);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
	return (0);
}
