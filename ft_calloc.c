/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytarhoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:06:15 by ytarhoua          #+#    #+#             */
/*   Updated: 2023/11/23 14:24:26 by ytarhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	if (size && nmemb > (SIZE_MAX / size))
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (ft_strdup(""));
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	if (p)
	{
		while (i < nmemb * size)
		{
			p[i] = 0;
			i++;
		}
	}
	return (p);
}
