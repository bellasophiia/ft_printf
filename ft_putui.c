/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:12:13 by  amangold         #+#    #+#             */
/*   Updated: 2023/02/28 17:51:52 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putui(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 0 && n <= 9)
		count += ft_putchar((n + '0'));
	else
	{
		count += ft_putui(n / 10);
		count += ft_putui(n % 10);
	}
	return (count);
}
