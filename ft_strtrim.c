/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytarhoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:05:46 by ytarhoua          #+#    #+#             */
/*   Updated: 2023/11/24 09:37:22 by ytarhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	inset(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && (inset(set, s1[i]) == 1))
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	start = i;
	i = ft_strlen(s1) - 1;
	while (i != 0 && (inset(set, s1[i]) == 1))
		i--;
	end = i;
	str = malloc((end - start + 2) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
