int	ft_recursive_factorial(int nb)
{
	if (nb < 0) // Não há fatoriais negativos
	{
		return (0); // Devolve zero
	}
	if (nb == 0 || nb == 1) // Se for 0 ou 1
	{
		return (1); // Devolve 1
	}
	return (nb * ft_recursive_factorial(nb - 1)); // Se maior que 1, fazemos recursão, ou seja, multi. fatorial
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
}
