#include <unistd.h>
#include <stdio.h>
#include <string.h>

/*
void	ft_putnbr(int nb)
{
	
}
*/

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(void)
{
	printf("%d\n", strcmp("Hello", "Hee"));
	printf("%d\n", ft_strcmp("Hello", "Hee"));
	return (0);
}
