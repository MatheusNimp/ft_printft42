/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:46:31 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/20 21:31:40 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

//main functions

int		ft_printf();
int		ft_printparams();
va_list	checkflag();

//count functions

int		ft_count_putchar(char c);
int		ft_count_putstr(char *s);
int		ft_count_putnull();
int		ft_count_putnbr(int n);
int		ft_count_unsputnbr(unsigned int n);
int		ft_count_putnbrhex(int n);


//aux funcions



#endif
