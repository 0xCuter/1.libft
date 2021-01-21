/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:30:47 by scuter            #+#    #+#             */
/*   Updated: 2021/01/20 15:37:33 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < (n - 1) && src[i] && n)
	{
		dest[i] = src[i];
		i++;
	}
	if (n)
		dest[i] = 0;
	while (src[i])
		i++;
	return (i);
}
