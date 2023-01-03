/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:25:01 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/20 18:21:45 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_char_printable(char c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	pnt;

	pnt = 0;
	while (str[pnt] != '\0')
	{
		if (ft_char_printable(str[pnt]) == 1)
			ft_putchar(str[pnt]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[pnt] / 16]);
			ft_putchar("0123456789abcdef"[str[pnt] % 16]);
		}
		pnt++;
	}
}

/* int main()
{
	ft_putstr_non_printable("Coucou\ttu v\eas bien ?");
	ft_putchar('\n');
	ft_putstr_non_printable("");
} */