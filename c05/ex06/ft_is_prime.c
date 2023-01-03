/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:11:43 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/28 08:53:00 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	fip;

	fip = 2;
	if (nb <= 1)
		return (0);
	while (fip <= (nb / 2))
	{
		if (!(nb % fip))
			return (0);
		else
			fip += 1;
	}
	return (1);
}

/* int	main()
{
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 7, ft_is_prime(7));
	printf("%d -> %d\n", 42, ft_is_prime(42));
	printf("%d -> %d\n", 5368749, ft_is_prime(5368749));
}
 */