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

void	ft_putchar(char c);

void	draw(int width, char left, char mid, char right)
{
	int	row;

	ft_putchar(left);
	row = 0;
	while (row < width -2)
	{
		ft_putchar(mid);
		row++;
	}
	if (width > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	height;

	height = 0;
	if (x <= 0 || y <= 0)
		return ;
	draw(x, 'A', 'B', 'C');
	while (height < y -2)
	{
		draw(x, 'B', ' ', 'B');
		height++;
	}
	if (y > 1)
		draw(x, 'A', 'B', 'C');
}
