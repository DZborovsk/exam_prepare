#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0);
}

int		main(void)
{
	printf("Is power of 2? %d", is_power_of_2(16));
	return (0);
}
