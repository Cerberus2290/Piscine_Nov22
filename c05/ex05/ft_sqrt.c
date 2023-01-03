/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 10:28:39 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/28 08:51:48 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	index;
	long	sr;

	sr = nb;
	if (sr < 0)
	{
		return (0);
	}
	if (sr == 1)
	{
		return (1);
	}
	index = 2;
	if (sr >= 2)
	{
		while (index * index <= sr)
		{
			if (index * index == sr)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}

/* int	main()
{
	printf("Square root of %d is %d\n", 0, ft_sqrt(0));
	printf("Square root of %d is %d\n", 1, ft_sqrt(1));
	printf("Square root of %d is %d\n", 49, ft_sqrt(49));
}
 */