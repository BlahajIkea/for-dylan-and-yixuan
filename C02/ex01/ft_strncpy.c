/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 10:16:28 by mwong             #+#    #+#             */
/*   Updated: 2026/06/23 11:38:22 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		if (i < n)
			dest[i] = '\0';
	}
	return (dest);
}
/*
int	main(void)
{
	char	a[] = "01234";
	char	b[] = "56789";
	int	n = 3;	

	printf("Before: %s | %s\n", a, b);
	ft_strncpy(a, b, n);
	printf("After: %s | %s\n", a, b);
}
*/
