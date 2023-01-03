/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:41 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/23 10:21:12 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	ps;

	ps = 0;
	while (str[ps] != '\0')
	{
		write (1, &str[ps], 1);
		ps++;
	}
}

/* int	main()
{
	ft_putstr ("Hardbass");
} */