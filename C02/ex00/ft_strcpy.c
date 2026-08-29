/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 14:08:35 by mwong             #+#    #+#             */
/*   Updated: 2026/06/23 10:02:03 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*



*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (i < src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
	dest[i + 1] = '\0';
}

#include<string.h>
#include <stdio.h>
int	main(void)
{
	char	a[] = "hello";
	char	b[] = "world";

	printf("Before: %s | %s\n", a, b);
	ft_strcpy(a, b);
	printf("After: %s | %s", a, b);

	ft_strcpy(a,b);
	return (0);
}
