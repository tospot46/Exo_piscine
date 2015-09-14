#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (c);
}

int	main()
{
	char alpha;
	
	alpha = 'z';
	while (alpha > 'a' - 1)
	{
		ft_putchar(alpha);
		alpha--;
	}
}
