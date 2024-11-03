/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:25:50 by emtopal           #+#    #+#             */
/*   Updated: 2024/11/01 18:09:49 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*p2;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	p2 = (char *) malloc((i + 1) * sizeof(char));
	if (p2 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		((unsigned char *) p2)[i] = s1[i];
		i++;
	}
	p2[i] = '\0';
	return (p2);
}