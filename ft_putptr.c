/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:29:12 by  amangold         #+#    #+#             */
/*   Updated: 2023/02/28 15:39:18 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putptr(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_putptr(n / 16);
		count += ft_putptr(n % 16);
	}
	else
	{
		if (n <= 9)
			count += ft_putchar(n + '0');
		else
			count += ft_putchar(n - 10 + 'a');
	}
	return (count);
}
