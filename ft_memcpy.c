/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:42:19 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/02/24 17:40:50 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char        *dest;
    const unsigned char    *srcc;
	int i;
	
	i = 0;
    dest = (unsigned char*)dst;
    srcc = (unsigned char*)src;
    while (n-- > 0)
	{
		dest[i] = srcc[i];
		i++;
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
} 
