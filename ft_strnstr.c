/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:26:27 by emtopal           #+#    #+#             */
/*   Updated: 2024/10/22 19:26:27 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	needlelenmethod(const char *needle)
{
	size_t	needlelen;
	size_t	needleindex;

	needlelen = 0;
	needleindex = 0;
	while (needle[needleindex] != '\0')
	{
		needleindex++;
		needlelen++;
	}
	return (needlelen);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlelen;
	size_t	needleindex;
	size_t	haystackindex;

	needlelen = needlelenmethod(needle);
	if (needlelen == 0)
		return ((char *) haystack);
	if (haystack[0] == '\0')
		return (NULL);
	if (len < needlelen)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *) &haystack[0]);
	haystackindex = 0;
	while (haystackindex < len)
	{
		needleindex = 0;
		while (haystackindex + needleindex < len && needle[needleindex] != '\0'
			&& haystack[haystackindex + needleindex] == needle[needleindex])
			needleindex++;
		if (needleindex == needlelen)
			return ((char *)&haystack[haystackindex]);
		haystackindex++;
	}
	return (NULL);
}
