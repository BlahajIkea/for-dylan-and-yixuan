/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 11:35:20 by mwong             #+#    #+#             */
/*   Updated: 2026/06/15 15:45:29 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	rev;

	rev = 'z';
	while (rev >= 'a')
	{
		ft_putchar(rev);
		rev--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
