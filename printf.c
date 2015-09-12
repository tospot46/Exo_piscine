#include <unistd.h>
#include <stdio.h>

char	ft_putchar (char c)
{
	write (1, &c, 1);
	return (c);
}

char	ft_putstr (char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i ++;
	}
	return (*str); 
}

int	main()
{
	char *phrase;
	phrase = "UNE BITE";
	ft_putstr (phrase);
	return (0);
}
