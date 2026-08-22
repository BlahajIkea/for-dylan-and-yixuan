/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strcmp.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 14:08:35 by mwong             #+#    #+#             */
/*   Updated: 2026/06/23 10:02:03 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!(s1[i] == s2[j]))
			return (j + i);
		i++;
		j++;
	}
	return (0);
}
/*
int	main(void)
{
	char	a[] = "abc";
	char	b[] = "a";
	int 	done = ft_strcmp(a, b);
	printf("%d", done);
}
*/
