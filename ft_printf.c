/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:17:29 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/20 18:46:56 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_printf(char *s, ...)
{
	va_list	args;
	char	c;
	int	total;
	
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			c = *s;
			ft_write_params(c, args);
			va_arg;
			s++;
		}
		write(1, &*s, 1);
		total++;
		s++;
	}
	va_end(args);
}
