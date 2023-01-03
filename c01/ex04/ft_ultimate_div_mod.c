/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:07:12 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/16 14:48:30 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divi;
	int	rest;

	divi = *a / *b;
	rest = *a % *b;
	*a = divi;
	*b = rest;
}

/*
int	main()
{
	int	t;
	int	s;

	t = 32;
	s = 13;
	ft_ultimate_div_mod(&t, &s);
	printf("The result for the division is: %d\n", t);
	printf("Which leaves a remainder of: %d\n", s);
}
*/