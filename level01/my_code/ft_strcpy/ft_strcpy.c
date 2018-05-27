#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
}

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char dest[6];
	printf("%s", ft_strcpy(dest, "Olleh"));
//	ft_putstr(ft_strcpy(dest, "Olleh"));
	return (0);
}
