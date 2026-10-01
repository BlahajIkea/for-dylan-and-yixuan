/* ************************************************************************** */
/*                                                                            */
/*                                                       :::     ::::::::     */
/*   ft_putnbr.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 16:39:57 by mwong             #+#    #+#             */
/*   Updated: 2026/06/17 11:44:47 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
_____EXERSIZE_____

This exersize wants us to use the 
write fuction to print ints to the terminal.



____ft_putchar_____

We are using ft_putchar in place of write
so that it is easier to read.

_____ft_putnbr_____

First we make sure that if the number is too big which is
the max int limit on a pc.
We make it so that it will use the write function to 
write out the too big number which is the max int limit.
Then return, which means to close the program and stop it from working.
Notice how we are just doing 'return ;' instead of 'return (0)', it is
because the return value for ft_putchar is void 
so we don't have to put any value.

Then we check if the number is negative by doing
if (nbr < 0).
If it is true then it will convert the nbr into a negative int
by mininus'ing itself.

Now for the nb or number:

if (nb >= 10)

First we check if the number is bigger or equal than
10

Then we are using recursion instead of the while loop.
So we do ft_putnbr(nb / 10)
Which divides it 10 and calls the function to start again.
And it will keep looping until it becomes less than 10.

Then after we are doing modulus which then 
turns it into a single digit.

Lastly the else which turns the number which is
a int, into an character, by doing:
nb + '0'. 

So to convert a char to an int, you need to add or + '0' or
the ascii letter as 48. So technically we can also use + 48 
instead of the '0'.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
/*
int	main(void)
{
	ft_putnbr(-123456);
}
*/
