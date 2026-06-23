int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	result = 1;
	i = 0;
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

/*

#include <stdio.h>

int	main(void)
{
	printf("2^3  = %d\n", ft_iterative_power(2, 3));
	printf("5^2  = %d\n", ft_iterative_power(5, 2));
	printf("0^0  = %d\n", ft_iterative_power(0, 0));
	printf("7^1  = %d\n", ft_iterative_power(7, 1));
	printf("2^-2 = %d\n", ft_iterative_power(2, -2));
	return (0);
}
*/
