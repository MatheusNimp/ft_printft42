/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_putnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:10:08 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/21 15:55:28 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_count_putnbr(int n)
{
	long	num;
	char	c;
	int		count;

	num = n;
	c = '0';
	count = 0;
	if (num < 0)
	{
		num = -(num);
		count += ft_count_putchar('-');
	}
	if (num >= 10)
		count += ft_count_putnbr(num / 10);
	c = (num % 10) + '0';
	count += ft_count_putchar(c);
	return (count);
}
