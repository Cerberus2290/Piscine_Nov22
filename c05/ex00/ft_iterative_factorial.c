/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:25:47 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/28 08:43:23 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	ifa;

	ifa = 1;
	while (nb > 0)
	{
		ifa *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (ifa);
}

/* int	main()
{
	printf("The Factorial of %d is: %i\n",3, ft_iterative_factorial(3));
} */