/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:09:34 by shrimech          #+#    #+#             */
/*   Updated: 2024/11/15 11:36:33 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "ft_printf.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>


int	ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	ft_putptr(void *ptr);
int	ft_putnbr_hex_upper(unsigned int n);
int	ft_putnbr_hex(unsigned long n);
int	ft_putchar(char c);
int	ft_putnbr(long n);
 
#endif