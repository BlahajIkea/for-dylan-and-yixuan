/* ************************************************************************** */
/*                                                                            */
/*                                                       :::     ::::::::     */
/*   ft_strncat.c                                      :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 16:39:57 by mwong             #+#    #+#             */
/*   Updated: 2026/06/17 11:44:47 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] && i < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "12345";
	char	dest[] = "67890";
	int	n = 5;

	printf("before: %s | %s\n", src, dest);
	ft_strncat(src, dest, n);
	printf("after: %s | %s", src, dest);
	printf("\ncopy until: %d", n);
}
*/
