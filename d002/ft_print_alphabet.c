#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (c);
}

 int	main()
{
	char alphabet;

	alphabet = 'a';
	while(alphabet < 'z' + 1)
	{
		ft_putchar(alphabet);
		alphabet++;
	}
}
