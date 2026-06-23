int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* 

#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 10)
	{
		printf("fib(%d) = %d\n", i, ft_fibonacci(i));
		i++;
	}
	printf("fib(-3) = %d\n", ft_fibonacci(-3));
	return (0);
}
*/
