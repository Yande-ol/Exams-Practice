/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yande-ol <yande-ol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:18:51 by yande-ol          #+#    #+#             */
/*   Updated: 2025/09/17 12:05:25 by yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
    int i;
    int c;

    i = 0;
    if(argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            c = argv[1][i];
            if(c >= 'a' && c <= 'y')
                c = c + 1;
            else if (c == 'z')
                c = 'a';
            else if (c >= 'A' && c <= 'Y')
                c = c + 1;
            else if (c == 'Z')
                c = 'A';
            write(1, &c, 1);
            i++;
 
        }
    }
    write (1, "\n", 1);
    return(0);
}