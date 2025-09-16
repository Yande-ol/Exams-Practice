/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yande-ol <yande-ol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:41:45 by yande-ol          #+#    #+#             */
/*   Updated: 2025/09/16 11:02:26 by yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return(i);
}

char   *ft_rev_print(char *str)
{
    int i;

    i = ft_strlen(str);
    while (--i >= 0)
    { 
        write(1, &str[i], 1);
    }
    i++;
    return(str);
}
int main()
{
    char s1[] = "Yan";

    ft_rev_print(s1);
}