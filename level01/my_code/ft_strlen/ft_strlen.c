#include <stdio.h>

int		ft_strlen(char *str)
{
	int		l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

int		main(void)
{
	printf("%d", ft_strlen("Why"));
	return (0);
}
