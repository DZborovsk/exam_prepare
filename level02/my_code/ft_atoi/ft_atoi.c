#include <stdio.h>

int		ft_atoi(const char *str)
{
	int		sign;
	int		result;
	int		i;

	i = 0;
	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\f'
			|| *str == '\r' || *str == '\v' || *str == '\n')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

int		main(void)
{
	printf("%i", ft_atoi("321654"));
}
