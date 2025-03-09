int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0) // Não existe raíz quadrada negativa
	{
		return (0);
	}
	i = 0; // Começamos do 0
	while (i * i <= nb) // Vai tentando multiplicar o número por si mesmo
	{
		if (i * i == nb) // Se encontrar, é a raíz quadrada
			return (i); // Retorna o número que deu certo
		i++; // Se não deu certo, passa para o próximo número
	}
	return (0); // Se não encontrar, retorna 0
}

#include <stdio.h>
int	main(void)
{
	int	right;
	int	wrong;

	right = 16;
	wrong = 17;
	printf("The result of %d is: %d\n", right, ft_sqrt(right));
	printf("The result of %d is: %d\n", wrong, ft_sqrt(wrong));
}
/*
O que é uma raiz quadrada?

Imagina que tens um número, por exemplo, 9, e queres saber qual é o número que, se multiplicado por ele mesmo, dá 9. Esse número é a raiz quadrada de 9, que neste caso é 3, porque 3×3=93×3=9.

Se tiveres 16, a raiz quadrada vai ser 4, porque 4×4=164×4=16.
Como funciona a nossa função?

    Se o número for negativo, não conseguimos fazer a raiz quadrada. Então, a função vai logo devolver 0 (porque não tem raiz quadrada real para números negativos).
    A função vai começar com 0 e vai testar: 0 × 0, depois 1 × 1, depois 2 × 2, e assim por diante, até encontrar o número que, quando multiplicado por si mesmo, dá o número que tu passaste.
    Se encontrar esse número, ela vai devolver o número certo. Se não encontrar, vai devolver 0.

Exemplo:

    Para 16, a função vai procurar:
    0 × 0 = 0, 1 × 1 = 1, 2 × 2 = 4, 3 × 3 = 9, 4 × 4 = 16.
    Então, a função encontra a resposta: 4!

    Para 17, ela vai procurar, mas nunca vai encontrar um número que, multiplicado por ele mesmo, dê 17. Então, vai devolver 0.*/
