/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:46:31 by maamaral          #+#    #+#             */
/*   Updated: 2025/10/21 11:25:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

//main functions

int		ft_printf(const char *format, ...);
int		ft_printparams(char c, va_list *arg);

//count functions

int		ft_count_putchar(char c);
int		ft_count_putstr(char *s);
int		ft_count_putptr(void *p);
int		ft_count_putnbr(int n);
int		ft_count_unsputnbr(unsigned int n);
int		ft_count_putnbrhex(unsigned int n, char c);


//aux funcions

int	ft_strlen(const char *s);
int	ft_islower(int c);

#endif
