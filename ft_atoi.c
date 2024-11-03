/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:24:07 by emtopal           #+#    #+#             */
/*   Updated: 2024/10/22 19:24:07 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	void	skip_spaces(const char *str, unsigned int *i)
{
	while (str[*i] == 32 || (str[*i] <= 13 && str[*i] >= 9))
		(*i)++;
}

static	int	handle_sign(const char *str, unsigned int *i, int *flag)
{
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i + 1] >= 48 && str[*i + 1] <= 57)
		{
			if (str[*i] == '-')
				*flag *= -1;
			(*i)++;
		}
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				flag;
	int				result;

	i = 0;
	flag = 1;
	result = 0;
	skip_spaces (str, &i);
	if ((str[i] >= 'A' && str[i] <= 'Z')
		|| (str[i] >= 'a' && str[i] <= 'z') || (str[i] <= 31 && str[i] >= 0))
		return (0);
	if (!handle_sign(str, &i, &flag))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + ((int)str[i] - '0');
		i++;
	}
	return (result * flag);
}
