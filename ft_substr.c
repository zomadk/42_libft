/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zomamaduekwe <zomamaduekwe@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 13:49:19 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/08/24 15:49:06 by zomamaduekw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t    i;

    i = 0;
    if (!(s) || (long int)len < 0)
      return NULL;
    sub = malloc(sizeof(char) * len + 1);
    if (sub == NULL)
      return NULL;
    while (start < strlen(s) && i < len)
    {
        sub[i] = s[start];
        i++;
        start++;
    }
    sub[i] = '\0';
    return (sub);
}
