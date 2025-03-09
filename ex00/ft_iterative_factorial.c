int	ft_iterative_factorial(int nb)
{
	int	result; // Variável para armazenar o resultado
	int	i; // Counter

	result = 1; // Qlq número fatorial começa no 1
	if (nb < 0) // Se o número for negativo, então retornamos 0
	{
		return (0);
	}
	i = 1; // Counter começa no 1, pq vamos multiplicar de 1 até nb
	while (i <= nb) // Enquanto counter for menor ou igual ao nb, continuamos a multiplicar
	{
		result *= i; // Multiplicamos o resultado pelo valor atual de i
		i++; // Passa para o próximo
	}
	return (result); // Retornamos o resultado final de fatorial
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5)); // 120
	printf("%d\n", ft_iterative_factorial(0)); // 1
	printf("%d\n", ft_iterative_factorial(7)); // 5040
	printf("%d\n", ft_iterative_factorial(-3)); // 0
}
