/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:10:46 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/21 11:14:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_strlen(const char *s)
{
	int	i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
