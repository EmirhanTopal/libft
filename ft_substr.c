/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:26:38 by emtopal           #+#    #+#             */
/*   Updated: 2024/11/01 18:08:34 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_arr;
	size_t	str_len;
	size_t	i;

	i = 0;
	str_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (str_len <= start)
		return ((char *) ft_calloc(1, 1));
	if (len > str_len - start)
		len = str_len - start;
	new_arr = (char *) malloc((len + 1) * sizeof(char));
	if (new_arr == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		new_arr[i] = s[start + i];
		i++;
	}
	new_arr[i] = '\0';
	return (new_arr);
}
