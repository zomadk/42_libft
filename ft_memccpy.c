/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:41:55 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/02/24 16:30:18 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char        *dest;
    const unsigned char    *srcc;
    int i;
    int b;

    i = 0;
    b = 0;
    size_t plus = 1;
    dest = (unsigned char*)dst;
    srcc = (unsigned char*)src;
    while (n-- > 0)
        {
                dest[i] = srcc[i];
                if (c == srcc[i])
                {
                  i++;
                  break;
                }
                i++;
        }
    return (dst);
}

int main()
{
  int dst[] = {1, 2, 3, 7, 8, 9};
  int src[] = {4, 5, 6, 0, 4, 5};
  size_t num = 4;

  ft_memcpy(dst, src, num);
  printf("%d%d%d%d", dst[0], dst[1], dst[2], dst[3]);
  return (0);
}i
