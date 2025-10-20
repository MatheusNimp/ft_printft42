/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writeparams.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:17:12 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/20 18:45:50 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_writeparams(char c, va_list args)
{
	va_start(args);
	if (c == 'c')
	{
		ft_putchar(c);
	}
	va_end(args);
}	
