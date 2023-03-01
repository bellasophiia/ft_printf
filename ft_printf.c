/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:05:13 by  amangold         #+#    #+#             */
/*   Updated: 2023/02/28 20:04:54 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_fspecifier(char format, va_list args)
{
	int	argcount;

	argcount = 0;
	if (format == 'c')
		ft_putchar(va_arg(args, int));
	if (format == 's')
		return (argcount += ft_putstr(va_arg(args, char *)));
	if (format == 'p')
	{	
		ft_putstr("0x");
		argcount += 2;
		return (argcount += ft_putptr(va_arg(args, unsigned long)));
	}
	if (format == 'd' || format == 'i')
		return (argcount += ft_putnbr(va_arg(args, int)));
	if (format == 'u')
		return (argcount += ft_putui(va_arg(args, unsigned int)));
	if (format == 'x')
		return (argcount += ft_puthex(va_arg(args, unsigned int), 'x'));
	if (format == 'X')
		return (argcount += ft_puthex(va_arg(args, unsigned int), 'X'));
	if (format == '%')
		return (argcount += ft_putchar('%'));
	return (1);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
			len = len + ft_fspecifier(s[++i], args);
		else
		{
			ft_putchar(s[i]);
			len = len + 1;
		}
		i++;
	}
	va_end(args);
	return (len);
}
