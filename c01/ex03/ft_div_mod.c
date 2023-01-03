/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:18:27 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/16 14:05:30 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int	main()
{
	int	a;
	int	b;
	int	t;
	int	s;

	a = 32;
	b = 55;
	ft_div_mod(a, b, &t, &s);
	printf("%d\n", t);
	printf("%d\n", s);
	
}
*/