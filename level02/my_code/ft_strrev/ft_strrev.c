#include <stdio.h>

char	*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		l;

	l = 0;
	i = 0;
	temp = 0;
	while (str[l])
		l++;
	while (i < l--)
	{
		temp = str[i];
		str[i] = str[l];
		str[l] = temp;
		i++;
	}
	return (str);
}

int		main(void)
{
	char	text[] = "Hello world!";
	printf("%s\n%s\n", text, ft_strrev(text));
	return (0);
}
