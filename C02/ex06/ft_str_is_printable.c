/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 10:19:23 by mwong             #+#    #+#             */
/*   Updated: 2026/06/24 11:16:49 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 31)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void) 
{
char abc[] = "weho";
int	done;
done = ft_str_is_printable(abc);

printf("%d", done);

}
*/
