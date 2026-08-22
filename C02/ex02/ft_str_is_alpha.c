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

#include <stdio.h>

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
int	main(void)
{
	char	a[] = "sup";
	int	done = ft_str_is_alpha(a);
	ft_str_is_alpha(a);

	printf("%d", done);
}
*/
