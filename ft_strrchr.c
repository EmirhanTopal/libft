/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:26:31 by emtopal           #+#    #+#             */
/*   Updated: 2024/11/01 18:08:41 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*r;

	r = NULL;
	i = 0;
	c = (unsigned char)c;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			r = (char *) &str[i];
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&str[ft_strlen(str)]);
	return (r);
}
