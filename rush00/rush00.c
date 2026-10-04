/* ************************************************************************** */
/*                                                                            */
/*                                                       :::     ::::::::     */
/*   rush00.c                                          :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 16:39:57 by mwong             #+#    #+#             */
/*   Updated: 2026/06/17 11:44:47 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	top(int c, int r, int x)
{
	if ((c == 0 && r == 0))
		ft_putchar('A');
	else if (c == x - 1)
		ft_putchar('C');
	else if (c < x - 1)
		ft_putchar('B');
}

void	mid(int c, int x)
{
	int	i;

	i = 0;
	while (i <= x)
	{
		if (c == 0)
		{
			ft_putchar('B');
			c++;
		}
		else if (c < x -1)
		{
			ft_putchar('-');
			c++;
		}
		i++;
	}
	ft_putchar('B');
	i = 0;
}

void	rush(int x, int y)
{
	int	r;
	int	c;

	if (x <= 0 || y <= 0)
		return ;
	r = 0;
	c = 0;
	while (r != y)
	{
		top(c, r, x);
		c++;
		r++;
		if (c == x)
		{
			ft_putchar('\n');
			c = 0;
			mid(c, x);
		}
	}
}
