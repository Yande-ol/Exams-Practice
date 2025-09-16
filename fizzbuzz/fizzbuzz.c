/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yande-ol <yande-ol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:48:11 by yande-ol          #+#    #+#             */
/*   Updated: 2025/09/15 10:34:44 by yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void     ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putnbr(int n)
{
    if ( n >= 0 && n <= 9)
        ft_putchar (n + '0');
    if (n > 9)
    {
        ft_putnbr (n / 10);
        ft_putnbr (n % 10); 
    }
}

int main(void)
{
    int i;

    i = 1;
    while(i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write (1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write (1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
                ft_putnbr(i);
            write(1, "\n", 1);
            i++;
    }
}