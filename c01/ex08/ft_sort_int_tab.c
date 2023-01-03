/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:34:36 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/17 11:36:46 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	t;
	int	exc;

	while (size >= 0)
	{
		t = 0;
		while (t < size - 1)
		{
			if (tab[t] > tab[t + 1])
			{
				exc = tab[t];
				tab[t] = tab[t + 1];
				tab[t + 1] = exc;
			}
			t++;
		}
		size--;
	}
}

/* int main()
{
	int	tab[5] = {25, 42, 16, 55, 603};
	int size = 5;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
} */