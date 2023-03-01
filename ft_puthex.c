/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:55:56 by  amangold         #+#    #+#             */
/*   Updated: 2023/02/28 20:05:43 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthex(unsigned int n, int capital)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_puthex(n / 16, capital);
		count += ft_puthex(n % 16, capital);
	}
	else
	{
		if (n <= 9)
			count += ft_putchar(n + '0');
		else
		{
			if (capital == 'X')
				count += ft_putchar(n - 10 + 'A' );
			if (capital == 'x')
				count += ft_putchar(n - 10 + 'a');
		}
	}
	return (count);
}
