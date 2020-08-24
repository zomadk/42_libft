/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zomamaduekwe <zomamaduekwe@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:00:26 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/08/24 17:06:22 by zomamaduekw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void     *ft_memalloc(size_t size)
{
	char	*mem;

	if (!(mem = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}

size_t  ft_wordcount(char const *str, char b)
{
	size_t    count;
28	
29	    count = 0;
30	    while (*str)
31	    {
32	        if (*str != b)
33	        {
34	            if (*(str + 1) == c || *(str + 1) == '\0')
35	                count++;
36	        }
37	        str++;
38	    }
39	    return (count);
}

char            **ft_split(char const *s, char c)
{
    char            **ptr;
    unsigned int    i;
    char            *final;

    if (!s ||
    (!(ptr = (char **)ft_memalloc(sizeof(char *) * (ft_wordcount(s, c) + 1)))))
        return (NULL);
    i = -1;
    while (*s)
    {
        while ((*s == c) && *s)
            ++s;
        if (*s)
        {
            if (!(final = ft_strchr(s, c)))
                ptr[++i] = ft_substr(s, 0, ft_strlen(s));
            else
                ptr[++i] = ft_substr(s, 0, final - s);
        }
        while ((*s != c) && *s)
            s++;
    }
    return (ptr);
}

