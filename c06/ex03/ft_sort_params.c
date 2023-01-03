/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:22:53 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/29 09:55:25 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		ft_putchar(str[a++]);

}

int	ft_strncmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		if (s1[a] == s2[a])
			a++;
		if (s1[a] < s2[a] || s1[a] > s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int ac, char **av)
{
	int	c;
	int	d;

	d = 1;
	while (d < ac - 1)
	{
		c = 1;
		while (c < ac - 1)
		{
			if (ft_strncmp(av[c], av[c + 1]) > 0)
			{
				ft_swap(&av[c], &av[c + 1]);
			}
			c++;
		}
		d++;
	}
	c = 1;
	while (c < ac)
	{
		ft_putstr(av[c]);
		ft_putchar('\n');
		c++;
	}
	return (0);
}
