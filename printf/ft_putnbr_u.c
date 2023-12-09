/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbajji <cbajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:52:30 by cbajji            #+#    #+#             */
/*   Updated: 2023/12/09 11:43:08 by cbajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned long i)
{
	int	counter;

	counter = 0;
	if (i < 10)
		counter += ft_putchar(i + '0');
	else
	{
		counter += ft_putnbr_u(i / 10);
		counter += ft_putnbr_u(i % 10);
	}
	return (counter);
}
