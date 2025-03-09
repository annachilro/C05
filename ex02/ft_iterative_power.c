int	ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
	{
		return (0); // Não é suposto dar negativos
	}
	if (power == 0)
	{
		return (1); // Qualquer número ^0 é 1
	}
	result = 1; // Começamos com 1, pq qlq num elevado a 0 é 1
	while (power > 0) // Enquanto houver expoente a multiplicar
	{
		result *= nb; // Multiplicamos o resultado pelo num base
		power--; // Diminuímos o expoente até chegar a 0
	}
	return (result); // Retorna o valor final da potência
}

#include <stdio.h>
int	main(void)
{
	printf("2^4 %d\n", ft_iterative_power(2, 4)); // 16
	printf("5^0 %d\n", ft_iterative_power(5, 0)); // 1
	printf("0^0 %d\n", ft_iterative_power(0, 0)); // 1
	printf("3^-2 %d\n", ft_iterative_power(3, -2)); // 0
}
/*
A função **`ft_iterative_power`** calcula a potência de um número multiplicando-o por ele próprio várias vezes.  

💡 **Regras básicas:**  
- `a^b` significa multiplicar `a` por ele mesmo `b` vezes.  
- Se o expoente for **0**, retorna `1` (qualquer número elevado a 0 é 1).  
- Se o expoente for **negativo**, retorna `0` (porque não lidamos com frações).  

🛠 **Como funciona?**  
1. Começamos com `resultado = 1`.  
2. Multiplicamos `resultado` pela base `power` vezes.  
3. Retornamos o valor final.  

Exemplo: **2^3 = 2 × 2 × 2 = 8**.  

Simples assim! 😃*/
