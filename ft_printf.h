/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:17:39 by  amangold         #+#    #+#             */
/*   Updated: 2023/02/28 19:35:06 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
size_t	ft_fspecifier(char format, va_list args);
size_t	ft_putchar(char c);
size_t	ft_putnbr(int n);
size_t	ft_putstr(char *s);
size_t	ft_puthex(unsigned int n, int capital);
size_t	ft_putui(unsigned int n);
size_t	ft_putptr(unsigned long n);

#endif 
