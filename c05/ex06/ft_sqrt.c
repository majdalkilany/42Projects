int	ft_sqrt(int nb)
{
	long	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/* 

#include <stdio.h>

int	main(void)
{
	printf("sqrt(25) = %d\n", ft_sqrt(25));
	printf("sqrt(49) = %d\n", ft_sqrt(49));
	printf("sqrt(10) = %d\n", ft_sqrt(10));
	printf("sqrt(1)  = %d\n", ft_sqrt(1));
	printf("sqrt(0)  = %d\n", ft_sqrt(0));
	printf("sqrt(144) = %d\n", ft_sqrt(144));
	return (0);
}
*/
