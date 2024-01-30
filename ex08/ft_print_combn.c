/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakarya <ysakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 07:08:40 by ysakarya          #+#    #+#             */
/*   Updated: 2024/01/30 08:49:35 by ysakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	basamakayirici(int j, int n);
void	arraybasamakkontrolu(int *a, int n);
void	printarray(int *a, int n);

void	ft_print_combn(int n)
{
	int	b;
	int	i;
	int	j;

	b = 1;
	i = 0;
	j = 0;
	while (i < n)
	{
		b *= 10;
		i++;
	}
	while (j < b)
	{
		basamakayirici(j, n);
		j++;
	}
}

void	basamakayirici(int j, int n)
{
	int		a[10];
	int		p;
	int		temp;
	char	c;

	temp = j;
	p = n;
	while (p > 0)
	{
		c = temp % 10 + '0';
		a[p] = c;
		temp = temp / 10;
		p--;
	}
	arraybasamakkontrolu(a, n);
}

void	arraybasamakkontrolu(int *a, int n)
{
	int	x;

	x = 1;
	while (x < n)
	{
		if (a[x] >= a[x + 1])
			return ;
		else
			x++;
	}
	printarray(a, n);
}

void	printarray(int *a, int n)
{
	int		x;
	char	c;

	x = 1;
	while (x <= n)
	{
		c = a[x];
		write (1, &c, 1);
		x++;
	}
	if (a[1] < '9' - n + 1)
		write(1, ", ", 2);
}
