/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:24:51 by emtopal           #+#    #+#             */
/*   Updated: 2024/10/22 19:24:51 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	c = (unsigned int)c;
	if (n > 0)
	{
		while (n--)
		{
			if (str[i] == (unsigned char) c)
			{
				return (&str[i]);
			}
			i++;
		}
	}
	return (NULL);
}
