/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 14:09:21 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/27 15:31:39 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*current;
	t_list		*temp;

	temp = *begin_list;
	current = *begin_list;
	while (*begin_list && cmp(data_ref, (*begin_list)->data) == 0)
	{
		temp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(temp);
	}
	current = *begin_list;
	while (current && current->next)
	{
		if (cmp(data_ref, current->next->data) == 0)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
		}
		if (current->next)
			current = current->next;
	}
}

int		ft_strlen(char *s)
{
	int		l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

int		cmp(void *s1, void *s2)
{
	char	*str1;
	char	*str2;
	int		i;

	i = 0;
	str1 = s1;
	str2 = s2;
	while (str1[i] && str2[i] && str1[i] == str2[i])
	{
		i++;
	}
	if (ft_strlen(str1) == i)
		return (0);
	return (1);
}

int		main(void)
{
	t_list		**list;
	t_list		*node1;
	t_list		*node2;
	t_list		*node3;
	t_list		*current;
	char		str[] = "World";

	node1 = malloc(sizeof(t_list*));
	node2 = malloc(sizeof(t_list*));
	node3 = malloc(sizeof(t_list*));
	list = malloc(sizeof(t_list**));
	node1->next = node2;
	node1->data = "Hello";
	*list = node1;
	node2->next = node3;
	node2->data = "World";
	node3->next = NULL;
	node3->data = "or BAtman";
	current = node1;
	while (current)
	{
		printf("%s\n", current->data);
		current = current->next;
	}
	ft_list_remove_if(list, "World", &cmp);
	current = *list;
	while (current)
	{
		printf("%s\n", current->data);
		current = current->next;
	}

	return (0);
}
