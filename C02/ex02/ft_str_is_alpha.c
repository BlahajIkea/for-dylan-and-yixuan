/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 09:04:54 by mwong             #+#    #+#             */
/*   Updated: 2026/06/23 16:25:22 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
____EXERSIZE____

This exersize wants us to check if the string is alphanumeric

____ft_str_is_alpha____

First we make an iterator named i
Then we assign it to 0

____WHILE____

Now the while loop which has the index
so we just while loop it until the string has reached the
null byte.

Then we check if the string is within the lowercase
and uppercase formats for letters.

____IF____

If the string is within the alphabet then we print out a 0.

If any place in the string is not part of the alphabet (a-z)
or A-Z
*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 'a' && str[i] < 'z') || (str[i] > 'A' && str[i] < 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[] = "1";
	int	d = ft_str_is_alpha(a);
	printf("%d", d);
}
*/
