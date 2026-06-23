int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	result = 1;
	i = 2;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("5!  = %d\n", ft_iterative_factorial(5));
	printf("0!  = %d\n", ft_iterative_factorial(0));
	printf("1!  = %d\n", ft_iterative_factorial(1));
	printf("4!  = %d\n", ft_iterative_factorial(4));
	printf("-3! = %d\n", ft_iterative_factorial(-3));
	return (0);
}
*/
