/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zomamaduekwe <zomamaduekwe@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 20:21:08 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/08/24 15:16:05 by zomamaduekw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wordcount(char const *str, char b)
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
