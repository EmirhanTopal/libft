/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:26:02 by emtopal           #+#    #+#             */
/*   Updated: 2024/11/01 18:09:43 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		s12_len;
	char		*ptr;
	size_t		i;
	size_t		j;

	s12_len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1 + ft_strlen(s2)));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ((size_t) ft_strlen(s1)))
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < (s12_len))
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
