/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:07:09 by scuter            #+#    #+#             */
/*   Updated: 2021/01/21 11:54:35 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	while (len)
	{
		dup[len - 1] = str[len - 1];
		len--;
	}
	return (dup);
}
