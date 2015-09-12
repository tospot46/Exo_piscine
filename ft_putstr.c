#include <unistd.h>
#include <stdio.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	*str;
	int	i;
	
	i = 0;
	str = "ma grosse bit en plâtre";
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0); 
}
