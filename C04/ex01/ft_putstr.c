/* ************************************************************************** */
/*                                                                            */
/*                                                       :::     ::::::::     */
/*   ft_putstr.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 16:39:57 by mwong             #+#    #+#             */
/*   Updated: 2026/06/17 11:44:47 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
_____EXERSIZE_____

This exersize wants us to write out a string
via the write funtion to the terminal.

_____ft_putstr_____

First we loop thought the string with a iterator.
Then inside we are using ft_putchar(str[i]);

That line uses ft_putchar, which can
only print out single digits since I allocated a single
byte to be printed out.

So then we iterate though and go to the next item in the array.

Then print again until the string has reached the null byte
or '\0'.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	char str[] = "hello";
	ft_putstr(str);
}
*/
