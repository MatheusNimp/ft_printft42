/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writeparams.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:17:12 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/21 11:45:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_writeparams(const char c, va_list *arg)
{
	if (c == 'c')
		return (ft_count_putchar(va_arg(*arg, int)));
	if (c == 's')
		return (ft_count_putstr(va_arg(*arg, char *)));
	if (c == 'p')
		return (ft_count_putptr(va_arg(*arg, void *)));
	if (c == 'd' || c == 'i')
		return (ft_count_putnbr(va_arg(*arg, int)));
	if (c == 'u')
		return (ft_count_unsputnbr(va_arg(*arg, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_count_putnbrhex(va_arg(*arg, unsigned int), c));
	if (c == '%')
		return (ft_count_putchar('%'));
	return (0);
}
