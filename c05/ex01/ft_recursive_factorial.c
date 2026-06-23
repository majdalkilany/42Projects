int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/* 

#include <stdio.h>

int	main(void)
{
	printf("5!  = %d\n", ft_recursive_factorial(5));
	printf("0!  = %d\n", ft_recursive_factorial(0));
	printf("1!  = %d\n", ft_recursive_factorial(1));
	printf("4!  = %d\n", ft_recursive_factorial(4));
	printf("-3! = %d\n", ft_recursive_factorial(-3));
	return (0);
}
*/
