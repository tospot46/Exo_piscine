#include <unistd.h>

char	 ft_putchar(char c)
{
	write(1, &c, 1);
	return (c);
}

int main ()
{
	char *nbr;
	int i;
	
	i = 0;
	nbr = "5672187";
	while(nbr[i] != '\0')
	{ 
		ft_putchar(nbr[i]);
		i++;
	} 
}
