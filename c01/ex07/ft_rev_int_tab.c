/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:30:42 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/17 10:15:47 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	t;
	int	rev;

	t = 0;
	while (t < (size / 2))
	{
		rev = tab[t];
		tab[t] = tab [size - 1 - t];
		tab [size - 1 - t] = rev;
		t++;
	}
}

/* int main()
{
	int	tab[8] = {0, 1, 2, 3, 4};
	int size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return(0);
} */