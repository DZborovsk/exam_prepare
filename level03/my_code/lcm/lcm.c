unsigned int		lcm(unsigned int a, unsigned int b)
{
	unsigned int	i;
	unsigned int	smallest;
	unsigned int	greatest;
	unsigned int	greatest_by_one;

	i = 1;
	greatest = b;
	smallest = a;
	greatest_by_one = b;
	if (a == 0 || b == 0)
		return (0);
	if (a > b)
	{
		smallest = b;
		greatest = a;
		greatest_by_one = a;
	}
	while (greatest % smallest != 0)
	{
		greatest = greatest_by_one * i;
		i++;
	}
	return (greatest);
}
