/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yande-ol <yande-ol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:59:15 by yande-ol          #+#    #+#             */
/*   Updated: 2025/09/15 14:13:04 by yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    if (s1[i] == s2[i])
        return (0);
    }
    return (s1[i] - s2[i]);
}
int main (void)
{
    char s1[] = "yAn";
    char s2[10] = "yan";

    printf("contanetou a s2 em s1: %d", ft_strcmp(s1, s2));
}