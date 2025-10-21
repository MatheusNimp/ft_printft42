/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:23:37 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/21 20:19:05 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

//main functions

int		ft_printf(const char *format, ...);
int		ft_writeparams(char c, va_list *arg);

//count functions

int		ft_count_putchar(int c);
int		ft_count_putstr(char *s);
int		ft_count_putptr(void *p);
int		ft_count_putnbr(int n);
int		ft_count_unsputnbr(unsigned int n);
int		ft_count_putnbrhex(unsigned long n, char c);

//aux funcions

int		ft_strlen(const char *s);
int		ft_islower(int c);

#endif
