
#include <stdio.h>

int	atoi(char *str) 
{
	int	i;
	int	res;
		

	i = 0;
	res = 0;

	while (str[i]) 
	{
		if (str[i] == ' ')
			i++;
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}


int	main(void) 
{
	char	str[] = "  523";
	int	val = atoi(str);

	printf("%d", val);
}
