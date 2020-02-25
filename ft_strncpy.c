/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:01:32 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/02/20 20:18:08 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dst, char *src, size_t len)
{
    unsigned int i;
    unsigned int size;

    i = 0;
    size = 0;
    while (src[i] && (size_t)i < len)
    {
        dst[i] = src[i];
        i++;
    }
    while ((size_t)i < len)
    {
        dst[i] = '\0';
        i++;
    }
    return (dst);
}

int main()
{
     char str[] = "test de chaine";
     char str2[] = "abcvploks";

     ft_strncpy(str, str2, 6);
     printf("%s\n", str);
     return 0;
}
