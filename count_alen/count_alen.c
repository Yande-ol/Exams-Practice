/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yande-ol <yande-ol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:13:14 by yande-ol          #+#    #+#             */
/*   Updated: 2025/09/18 13:57:08 by yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     count_alen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] == 'a')
            {
                break;
            }
        i++;

    }
    return (i);
}

#include <stdio.h>

int     main()
{
    char str[] = "bhabhbhbaaaaaaaaa";

    printf("original: %s\n", str);

    printf("counted: %d\n", count_alen(str));
}