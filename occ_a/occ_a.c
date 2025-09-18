/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occ_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yande-ol <yande-ol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:26:27 by yande-ol          #+#    #+#             */
/*   Updated: 2025/09/18 13:59:13 by yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int occ_a(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(str[i])
    {
        if(str[i] == 'A')
            count++;
        i++;
    }
    return(count);
}
#include <stdio.h>

int main()
{
    char str[] = "bgkbkhbfksgsA";

    printf("original: %s\n", str);
    
    printf("count str A: %d", occ_a(str));

    return (0);
}