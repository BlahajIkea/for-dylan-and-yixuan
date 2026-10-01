/* ************************************************************************** */
/*                                                                            */
/*                                                       :::     ::::::::     */
/*   ft_strncmp.c                                      :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 16:39:57 by mwong             #+#    #+#             */
/*   Updated: 2026/06/17 11:44:47 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
_____EXERSIZE_____

This exersize wants us to check the difference in ascii
between two strings up to 'n' which is number.

____WHILE____

First we are looping through the string and looping until
we reach the null byte.

_____IF____

The if statement at the top is very imporant.

Without it, if the user were to input 0 as the amount
the user wants to check. The program would crash.

Then if either the string is more than 0 then
it will keep iterating.
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i <= n)
			i++;
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	char s1[] = "hehe";
	char s2[] = "hehe";
	int n = 3;
	int res = ft_strncmp(s1, s2, n);

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", res);
}
*/
