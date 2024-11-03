/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:25:08 by emtopal           #+#    #+#             */
/*   Updated: 2024/10/22 19:25:08 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *) dst;
	s = (const char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (s > d)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (0 < len)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (dst);
}
