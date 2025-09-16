/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yande-ol <yande-ol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:43:04 by yande-ol          #+#    #+#             */
/*   Updated: 2025/09/16 14:15:48 by yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strrev(char *str)
{
   int i;
   int j;
   char temp;

   i = 0;
   j = 0;
   while (str[j] != '\0')
        j++;
    j--;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return(str);
}
int main()
{
    char s1[] = "carlos";

    printf("Troca dos caracteres: %s", ft_strrev(s1));
}