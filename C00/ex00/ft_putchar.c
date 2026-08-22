/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 11:35:20 by mwong             #+#    #+#             */
/*   Updated: 2026/06/15 15:45:29 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*
(ex00)

____EXERSIZE____
This is a function that writes a text to the terminal using the 'write' 
function in C.

____WRITE FUNC____
The write funtion like this:
The '1', is the terminal.
The middle is the input.

The last number, is the amounts bytes needed, so if you want to print
out 2 letters, you need to adjust the bytes.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int	main(void)
{
	ft_putchar('h');
}*/
