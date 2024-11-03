/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:24:48 by emtopal           #+#    #+#             */
/*   Updated: 2024/10/22 19:24:48 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	get_len_of_num(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	if (num == -2147483648)
		return (11);
	if (num < 0)
	{
		num = -num;
		count++;
	}
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

static	char	*write_integers(int n_len, int digit_negative, char *str, int n)
{
	while (n_len > digit_negative)
	{
		str[n_len - 1] = (n % 10) + '0';
		n = n / 10;
		n_len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		n_len;
	int		digit_negative;

	n_len = get_len_of_num(n);
	str = (char *) malloc(sizeof(char) * (n_len + 1));
	if (str == NULL)
		return (NULL);
	digit_negative = 0;
	str[n_len] = '\0';
	if (n == -2147483648)
	{
		n = 214748364;
		str[0] = '-';
		str[n_len - 1] = '8';
		n_len--;
		digit_negative = 1;
	}
	else if (n < 0)
	{
		n = -n;
		str[0] = '-';
		digit_negative = 1;
	}
	return (write_integers(n_len, digit_negative, str, n));
}
