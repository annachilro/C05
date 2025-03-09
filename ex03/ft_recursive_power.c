int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1); // Qlq número elevado a 0 é sempre 1 (regra matemática)
	}
	return (nb * ft_recursive_power(nb, power - 1)); // Multi. o nb por ele mesmo várias vezes, chamando a função outra vez
}

#include <stdio.h>
int	main(void)
{
	printf("5^5: %d\n", ft_recursive_power(5, 5)); // 3125
	printf("0^4: %d\n", ft_recursive_power(0, 4)); // 0
	printf("2^-4: %d\n", ft_recursive_power(2, -4)); // 0
	printf("0^0: %d\n", ft_recursive_power(0, 0)); // 1
}
/*
A função **`ft_recursive_power`** calcula a potência de um número usando **recursão** (ou seja, a função chama-se a si mesma até chegar a um caso base).  

💡 **Regras básicas:**  
- `a^b` significa multiplicar `a` por ele mesmo `b` vezes.  
- Se o expoente for **0**, retorna `1` (qualquer número elevado a 0 é 1).  
- Se o expoente for **negativo**, retorna `0` (não lidamos com frações).  

🛠 **Como funciona?**  
1. **Caso base**: Se `power == 0`, retorna `1`.  
2. **Caso negativo**: Se `power < 0`, retorna `0`.  
3. **Passo recursivo**: Multiplica `nb` pelo resultado da função chamada com `power - 1`.  

🔄 **Exemplo de 2^3:**  
`2^3 = 2 × (2^2)`  
`2^2 = 2 × (2^1)`  
`2^1 = 2 × (2^0)` → Aqui para e retorna `1`, depois volta a multiplicar tudo.  

O código segue este raciocínio! 😃*/
