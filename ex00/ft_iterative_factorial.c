int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(7));
	printf("%d\n", ft_iterative_factorial(-3));
}
