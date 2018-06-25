/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 18:10:25 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/25 19:52:20 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		count_word(char *s)
{
	int		word;
	int		i;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\t'))
			i++;
		if (s[i] && s[i] != ' ' && s[i] != '\t')
			word++;
		while (s[i] && s[i] != ' ' && s[i] != '\t')
			i++;
	}
	return (word);
}

void	print_word(char *s, int total_w, int loop)
{
	int		i;
	int		current_w;

	current_w = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] != ' ' && s[i] != '\t')
			current_w++;
		if (current_w == total_w)
		{
			while (s[i] && s[i] != ' ' && s[i] != '\t')
				write(1, &s[i++], 1);
			if (loop)
				write(1, " ", 1);
			total_w--;
		}
		else
			while (s[i] && s[i] != ' ' && s[i] != '\t')
				i++;
		while (s[i] && (s[i] == ' ' || s[i] == '\t'))
			i++;
	}
}

int		main(int ac, char **av)
{
	int		word;
	int		loop;

	loop = 0;
	word = 0;
	if (ac == 2)
	{
		word = count_word(av[1]);
		loop = word;
		while (loop--)
		{
			print_word(av[1], word, loop);
			word--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
