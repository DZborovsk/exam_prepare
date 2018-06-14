#include <stdio.h>
#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*dup;
	int		l;

	l = 0;
	while (src[l])
		l++;
	dup = malloc(sizeof(char) * (l + 1));
	if (dup == NULL)
		return (0);
	l = 0;
	while (src[l])
	{
		dup[l] = src[l];
		l++;
	}
	dup[l] = '\0';
	return (dup);
}

int		main(void)
{
	printf("New string: %s", ft_strdup("Hello ninjas"));
	return (0);
}
