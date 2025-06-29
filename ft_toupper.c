/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscarcin <pscarcin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:35:04 by pscarcin          #+#    #+#             */
/*   Updated: 2025/01/14 18:35:18 by pscarcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main ()
{
    int a = 'a';
    int b = 'a';

    printf("%c\n", toupper(a));
    printf("%c\n", ft_toupper(b));
    return (0);
}
*/