#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (c);
}

int	main()
{
	int n;
	
	n = 2;
	if (n > 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
