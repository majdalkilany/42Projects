int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/* 

#include <stdio.h>

int	main(void)
{
	printf("2^3  = %d\n", ft_recursive_power(2, 3));
	printf("5^2  = %d\n", ft_recursive_power(5, 2));
	printf("0^0  = %d\n", ft_recursive_power(0, 0));
	printf("7^1  = %d\n", ft_recursive_power(7, 1));
	printf("2^-2 = %d\n", ft_recursive_power(2, -2));
	return (0);
}
*/
