/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 09:19:06 by mwong             #+#    #+#             */
/*   Updated: 2026/06/23 16:48:39 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
____EXERSIZE_____

This exersize wants us to check is within 
0-9, then return 0.
Else it will return 1.

_____ft_str_is_numeric_____

First we need to loop though the string with the unsigned int.

First we are checking if
the contents of the string
is within the 0-9 then it will print 0.

If there is anything other than a number int the string.
Then it will print 1, or as an error.
*/
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > '0' && str[i] < '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "1234";
	int	done = ft_str_is_numeric(a);
	printf("%d", done);
}
*/
