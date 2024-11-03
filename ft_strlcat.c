/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:26:08 by emtopal           #+#    #+#             */
/*   Updated: 2024/11/03 02:48:47 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	control(size_t s_i, const char *src)
{
	s_i = 0;
	while (src[s_i] != '\0')
		s_i++;
	return (s_i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_i;
	size_t	d_i;
	size_t	n_i;
	size_t	size_i;

	s_i = 0;
	d_i = 0;
	n_i = 0;
	s_i = control(s_i, src);
	while (d_i < dstsize && dst[d_i] != '\0')
		d_i++;
	if (dstsize == 0 || d_i >= dstsize)
		return (dstsize + s_i);
	size_i = 0;
	while (size_i < (dstsize - d_i - 1) && src[n_i] != '\0')
	{
		dst[d_i + n_i] = src[n_i];
		n_i++;
		size_i++;
	}
	dst[d_i + n_i] = '\0';
	return (d_i + s_i);
}
