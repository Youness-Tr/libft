/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytarhoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:02:39 by ytarhoua          #+#    #+#             */
/*   Updated: 2023/11/22 12:54:52 by ytarhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ar1 = (const unsigned char *)s1;
	const unsigned char	*ar2 = (const unsigned char *)s2;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && ar1[i] == ar2[i])
		i++;
	return ((unsigned char)ar1[i] - (unsigned char)ar2[i]);
}
