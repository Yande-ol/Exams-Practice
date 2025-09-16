/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reapet_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yande-ol <yande-ol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:16:13 by yande-ol          #+#    #+#             */
/*   Updated: 2025/09/15 11:30:56 by yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
    int i;
    int c;
    int reapet;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
          c = argv[1][i];
          reapet = 1;
            if(c >= 'a' && c <= 'z')
            reapet = c - 'a' + 1;
            else if (c >= 'A' && c <= 'Z')
            reapet = c - 'A' + 1;
            while (reapet > 0)
            {
                write(1, &c, 1);
            reapet--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}