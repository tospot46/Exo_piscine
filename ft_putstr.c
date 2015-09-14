#include <unistd.h>
#include <stdio.h>

char	ft_putchar (char c)
{
	write(1, &c, 1);
	return (c);
}

int	main(void)
{
	char	*str;
	int	i;
	
	i = 0;
	scanf("%s", str);
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0); 
}
