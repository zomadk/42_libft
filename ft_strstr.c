/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:01:35 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/02/20 20:19:14 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strstr(const char *str, const char *to_find)
{
   unsigned int pos;
    unsigned int i;

    if (!*to_find)
        return ((char*)str);
    pos = 0;
    while (str[pos] != '\0')
    {
        if (str[pos] == to_find[0])
        {
            i = 1;
            while (to_find[i] != '\0' && str[pos + i] == to_find[i])
                ++i;
            if (to_find[i] == '\0')
                return ((char*)to_find);
        }
        ++pos;
    }
    return (0);

}

int main() 
{
	char array[] = "asdf qwerty";
	char block[] = "qwerty1";

	printf("%s", ft_strstr(array, block));
	
	return (0);
}