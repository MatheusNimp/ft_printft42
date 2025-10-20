/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_unsputnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:31:49 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/20 21:36:35 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_count_unsputnbr(unsigned int n)
{
	long	num;
	char	c;
	int	count;

	num = n;
	c = '0';
	count = 0;
	if (num >= 10)
		count += ft_count_unsputnbr(num / 10);
	c = (num % 10) + '0';
	count += ft_count_putchar(c);
	return (count);
}
