/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscarcin <pscarcin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:34:39 by pscarcin          #+#    #+#             */
/*   Updated: 2025/01/14 23:48:38 by pscarcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int     main()
{
    int a = 'Z';
    int b = 'Z';

    printf("%c\n", tolower(a));
    printf("%c\n", ft_tolower(b));
    return (0);
}
*/