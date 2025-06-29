/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscarcin <pscarcin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:43:54 by pscarcin          #+#    #+#             */
/*   Updated: 2025/01/14 17:45:57 by pscarcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		n--;
		ptr++;
	}
}

/*
#include <string.h>

int     main()
{
    char    test1[10] = "Bellazio!!";
    char    test2[10] = "Bellazio!!";

    printf("%s\n", test1);
    printf("%s\n", test2);

    bzero(test1, 3);
    ft_bzero(test2, 3);

    int i = 0;

    while (i < 10)
    {
        if (test1[i] == '\0')
            printf("0 ");
        else
            printf("%c ", test1[i]);
        i++;
    }
    printf("\n");

    i = 0;

    while (i < 10)
    {
        if (test2[i] == '\0')
            printf("0 ");
        else
            printf("%c ", test2[i]);
        i++;
    }
    printf("\n");
    return (0);
}
*/