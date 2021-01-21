/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:11:58 by scuter            #+#    #+#             */
/*   Updated: 2021/01/21 16:21:02 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t i;

	if (*str2 == 0)
		return ((char *)str1);
	while (*str1)
	{
		i = 0;
		while (str1[i] == str2[i] && i < len)
		{
			if (str2[i + 1] == 0)
				return ((char *)str1);
			i++;
		}
		str1++;
	}
	return (NULL);
}
