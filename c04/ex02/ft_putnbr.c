//#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	char	c[12];
	int		i;

	nbl = nb;
	i = 0;
	if (nbl == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nbl < 0)
	{
		nbl = nbl * -1;
		write(1, "-", 1);
	}
	while (nbl > 0)
	{
		c[i] = nbl % 10 + '0';
		i++;
		nbl = nbl / 10;
	}
	while (i > 0)
	{
		i--;
		write(1, &c[i], 1);
	}
}

//int	main(void)
//{
//	ft_putnbr(-2147483648);
//	write(1, "\n", 1);
//	return (0);
//}
