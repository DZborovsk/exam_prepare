/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:20:40 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/26 16:37:59 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		count_word(char *s)
{
	int		i;
	int		w;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			i++;
		if (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			w++;
		while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			i++;
	}
	return (w);
}

int		count_letter(char *s, int i)
{
	int		l;

	l = 0;
	while (s[i] && s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
	{
		l++;
		i++;
	}
	return (l);
}

char	*make_word(char *s, int i)
{
	int		j;
	char	*word;

	word = 0;
	j = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	if (s[i] && s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
	{
		word = (char*)malloc(sizeof(count_letter(s, i) + 1));
		while (s[i] && s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			word[j++] = s[i++];
		word[j] = '\0';
	}
	return (word);
}

char	**ft_split(char *str)
{
	char	**split;
	int		w;
	int		word;
	int		i;

	i = 0;
	word = 0;
	w = count_word(str);
	split = (char**)malloc(sizeof(char*) * (w + 1));
	if (split == NULL)
		return ((char**)0);
	split[w] = NULL;
	while (word < w)
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		split[word] = make_word(str, i);
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		word++;
	}
	return (split);
}

int		main(void)
{
	char	**split;
	char	str[] = "  Hello World I am batman or no or";
	int		i;

	i = 0;
	split = ft_split(str);
	while(split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	printf("%s\n", split[i]);
	return (0);
}
