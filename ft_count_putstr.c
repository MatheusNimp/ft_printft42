/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:05:27 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/20 21:09:42 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_count_putstr(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		i += ft_count_putchar(*s);
		s++;
	}
	return (i);
}
