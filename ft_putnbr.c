/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:09:01 by  amangold         #+#    #+#             */
/*   Updated: 2023/02/27 17:55:30 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		count += ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			count += ft_putchar('-');
			n = n * -1;
		}
		if (n >= 0 && n <= 9)
			count += ft_putchar(n + '0');
		else
		{
			count += ft_putnbr(n / 10);
			count += ft_putnbr(n % 10);
		}
	}
	return (count);
}
