/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_putnbrhex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:12:37 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/21 20:18:44 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_count_putnbrhex(unsigned long n, char c)
{
	char	*base;
	int		count;

	count = 0;
	if (ft_islower(c))
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_count_putnbrhex(n / 16, c);
	count += ft_count_putchar(base[n % 16]);
	return (count);
}
