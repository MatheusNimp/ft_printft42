/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:21:25 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/21 19:55:20 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_count_putstr(char *s)
{
	int	i;

	if (!(s))
		return (write(1, "(null)", 6));
	i = write(1, s, ft_strlen(s));
	return (i);
}
