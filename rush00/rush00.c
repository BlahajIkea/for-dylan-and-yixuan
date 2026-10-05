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
	int	i;

	ft_putchar(left);
	i = 0;
	while (i < width -2)
	{
		ft_putchar(mid);
		i++;
	}
	if (width > 1)
		ft_putchar(right);
	ft_putchar('\n');
}


void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	draw(x, 'A', 'B', 'C');
	i = 2;

	while (i < y)
	{
		draw(x, 'B', ' ', 'B');
		i++;
	}
	if (y > 1)
		draw(x, 'A', 'B', 'C');
}
