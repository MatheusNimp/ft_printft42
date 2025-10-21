/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:22:38 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/21 18:22:45 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	char	c;
	int		total;

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
