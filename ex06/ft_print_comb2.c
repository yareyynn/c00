/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakarya <ysakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:34:22 by ysakarya          #+#    #+#             */
/*   Updated: 2024/01/30 02:36:48 by ysakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(int x);

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			printer(first);
			write(1, &" ", 1);
			printer(second);
			if (first < 98)
				write(1, &", ", 2);
			second ++;
		}
		first ++;
	}
}

void	printer(int x)
{
	char	i;
	char	j;

	i = (x / 10) + 48;
	j = (x % 10) + 48;
	write(1, &i, 1);
	write(1, &j, 1);
}
