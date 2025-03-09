int	ft_fibonacci(int index)
{
	if (index < 0) // Não existe índice neg na sequência
	{
		return (-1);
	}
	if (index == 0) // 0 é o primeiro num de Fibonacci
	{
		return (0);
	}
	if (index == 1) // 1 é o segundo num de Fibonacci
	{
		return (1);
	}
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2); // A sequência de Fibonacci é formada pela soma dos dois números anteriores. A função chama a si mesma recursivamente para calcular os números anteriores.
}

#include <stdio.h>
int	main(void)
{
	printf("Fibonacci(0) = %d\n", ft_fibonacci(0)); // 0
	printf("Fibonacci(1) = %d\n", ft_fibonacci(1)); // 1
	printf("Fibonacci(5) = %d\n", ft_fibonacci(5)); // 5 (0, 1, 1, 2, 3, 5)
	printf("Fibonacci(10) = %d\n", ft_fibonacci(10)); // 55
	printf("Fibonacci(-1) = %d\n", ft_fibonacci(-1)); // -1 (inválido)
}
/*
Claro! Aqui vai uma explicação simples do conceito de Fibonacci:

### 📖 **Conceito de Fibonacci**

A sequência de Fibonacci é uma série de números onde cada número é a soma dos dois anteriores. Ela começa assim:

**0, 1, 1, 2, 3, 5, 8, 13, 21...**

- O primeiro número é 0, o segundo é 1.
- A partir daí, cada número seguinte é a soma dos dois anteriores:
  - 1 + 0 = 1
  - 1 + 1 = 2
  - 1 + 2 = 3
  - 2 + 3 = 5
  - E assim por diante.

### 🧠 **Como funciona a recursão na função?**

- A função **`ft_fibonacci`** vai se chamar repetidamente até chegar ao índice desejado.
- Se você quer saber o 5º número de Fibonacci, a função vai calcular isso chamando a si mesma, somando os resultados dos números anteriores.
- Por exemplo, para calcular o Fibonacci de 5 (F(5)), ela vai somar F(4) e F(3). E para calcular F(4), ela soma F(3) e F(2), e assim por diante.

### ⚠️ **Casos Especiais:**
- Se o índice for menor que 0, a função retorna **-1**, porque índices negativos não existem na sequência.
- Para índices 0 e 1, a função retorna diretamente os números correspondentes (0 e 1), porque são os primeiros números da sequência.

Esse é o conceito básico de como funciona a sequência de Fibonacci e como a função recursiva trabalha para calcular o número desejado! 😊*/
