/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkflag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:03:52 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/20 21:30:51 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

va_list	ft_checkflag(char c, va_list l)
{
	if (c == 'c')
		va_arg(l, char);
	if (c == 's')
		va_arg(l, char *);
	if (c == 'p')
		va_arg(l, void *);
	if (c == 'd' || c == 'i' || c == 'x' || c == 'X')
		va_arg(l, int);
	if (c == 'u')
		va_arg(l, unsigned int);
}
