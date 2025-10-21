/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:17:29 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/21 11:45:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	char	c;
	int	total;

	total = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			c = *s;
			total += ft_writeparams(c, &args);
			s++;
			continue ;
		}
		write(1, s, 1);
		total++;
		s++;
	}
	va_end(args);
	return (total);
}
