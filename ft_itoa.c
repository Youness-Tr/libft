/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytarhoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:43:55 by ytarhoua          #+#    #+#             */
/*   Updated: 2023/11/22 12:25:12 by ytarhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	n_len(int n)
{
	long	result;
	int		i;

	i = 0;
	result = n;
	while (result != 0)
	{
		result = result / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	long	result;
	char	*str;

	i = 0;
	if (n <= 0)
		i++;
	i += n_len(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	result = (long)n;
	str[i] = '\0';
	if (result < 0)
		result *= -1;
	while (i)
	{
		str[--i] = result % 10 + 48;
		result /= 10;
	}
	if (n < 0)
		str[i] = '-';
	return (str);
}
