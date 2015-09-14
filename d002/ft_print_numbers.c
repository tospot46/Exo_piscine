#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (c);
}

int	main()
{
	char nbr;
	
	nbr = '0';
	while(nbr < '9' + 1)
	{
		ft_putchar(nbr);
		nbr++;
	}
	return (0);
}
