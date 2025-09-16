/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yande-ol <yande-ol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:49:30 by yande-ol          #+#    #+#             */
/*   Updated: 2025/09/15 12:30:40 by yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while(dest[i] != '\0')
    {
        src[i] = dest[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
int main (void)
{
    char s1[] = "yan";
    char s2[10];

    printf("contanetou a s2 em s1: %s", ft_strcpy(s1, s2));
}