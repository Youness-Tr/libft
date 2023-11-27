/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytarhoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:02:04 by ytarhoua          #+#    #+#             */
/*   Updated: 2023/11/23 12:58:38 by ytarhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	size_t				z;
	const unsigned char	*p;

	p = s;
	i = 0;
	z = 0;
	while (z <= n)
		z++;
	while (i < z && i < n)
	{
		if ((unsigned char)p[i] == (unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
