/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakarya <ysakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:19:07 by ysakarya          #+#    #+#             */
/*   Updated: 2024/01/30 02:53:04 by ysakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	long	x;

	x = nb;
	if (x < 0)
	{
		ft_putchar('-');
		x *= -1;
	}
	if (x < 10)
	{
		ft_putchar(x + 48);
		return ;
	}
	else
		ft_putnbr(x / 10);
	ft_putnbr(x % 10);
}
