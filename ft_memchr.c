/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:49:55 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/02/24 17:40:03 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t            i;
    size_t b;
    unsigned char    *ptr;

    i = 0;
    b = 0;
    ptr = (unsigned char*)s;
    while (i++ <= n)
    {     
        if (ptr[b] == (unsigned char)c)
            return ((void*)ptr);
        b++;
    }
    return NULL;
}

int main()
{
  char dst[] = "helloplmk";

  printf("%s",ft_memchr(dst, 'n', 7));
  return (0);
}
