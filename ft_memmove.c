/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscarcin <pscarcin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:17:51 by pscarcin          #+#    #+#             */
/*   Updated: 2025/01/14 18:21:10 by pscarcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	if (dst == NULL || src == NULL || len == 0)
		return (dst);
	if (dst < src)
	{
		while (len--)
			*d++ = *s++;
	}
	else if (dst > src)
	{
		s += len - 1;
		d += len - 1;
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
