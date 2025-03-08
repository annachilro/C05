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
	return (result)
}
