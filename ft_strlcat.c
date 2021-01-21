/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:02:38 by scuter            #+#    #+#             */
/*   Updated: 2021/01/21 15:57:03 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t len;

	len = 0;
	while (src[len])
		len++;
	while (*dest && size)
	{
		dest++;
		len++;
		size--;
	}
	while (*src && size > 1)
	{
		*dest++ = *src++;
		size--;
	}
	if (size)
		*dest = 0;
	return (len);
}
