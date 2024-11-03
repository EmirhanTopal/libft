/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:26:34 by emtopal           #+#    #+#             */
/*   Updated: 2024/11/03 02:49:39 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	front(size_t i, int flag, char const *s1, char const *set)
{
	size_t	s;

	i = 0;
	flag = 0;
	while (s1[i] != '\0')
	{
		s = 0;
		flag = 0;
		while (set[s] != '\0')
		{
			if (s1[i] == set[s])
			{
				flag = 1;
				break ;
			}
			else
				flag = 0;
			s++;
		}
		if (flag == 1)
			i++;
		else
			break ;
	}
	return (i);
}

static	size_t	back(size_t s1_count, int flag, char const *s1, char const *set)
{
	size_t	s;

	s1_count = ft_strlen(s1);
	while (s1_count > 0)
	{
		s = 0;
		flag = 0;
		while (set[s] != '\0')
		{
			if (s1[s1_count - 1] == set[s])
			{
				flag = 1;
				break ;
			}
			else
				flag = 0;
			s++;
		}
		if (flag == 1)
			s1_count--;
		else
			break ;
	}
	return (s1_count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_count;
	char	*s2;
	int		flag;
	size_t	i;
	size_t	n;

	s1_count = 0;
	flag = 0;
	i = front(s1_count, flag, s1, set);
	s1_count = back(i, flag, s1, set);
	if (i >= s1_count)
		return (ft_strdup(""));
	s2 = (char *) malloc(sizeof(char) * (s1_count - i + 1));
	if (s2 == NULL)
		return (NULL);
	n = 0;
	while (i < s1_count)
	{
		s2[n] = s1[i];
		n++;
		i++;
	}
	s2[n] = '\0';
	return (s2);
}
