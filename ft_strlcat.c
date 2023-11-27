/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytarhoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:21:03 by ytarhoua          #+#    #+#             */
/*   Updated: 2023/11/23 15:19:50 by ytarhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;
	size_t	result;

	slen = 0;
	dlen = 0;
	if (!dest && size == 0)
		return (0);
	while (dest[dlen] && dlen < size)
		dlen++;
	while (src[slen])
		slen++;
	result = dlen + slen;
	if (size == dlen)
		return (result);
	i = 0;
	while (src[i] && dlen + 1 < size)
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}
	dest[dlen] = '\0';
	return (result);
}
