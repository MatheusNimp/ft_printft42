/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_putptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:12:09 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/21 20:20:07 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_count_putptr(void *p)
{
	int				count;
	unsigned long	ptr;

	count = 0;
	ptr = (unsigned long )p;
	if (ptr == 0)
		return (ft_count_putstr("(nil)"));
	count += ft_count_putstr("0x");
	count += ft_count_putnbrhex(ptr, 'x');
	return (count);
}
/*
int	main(void)
{
	void	*ptr;

	ptr = NULL;
	ft_count_putptr(ptr);
}
*/
