/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbajji <cbajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:30:35 by cbajji            #+#    #+#             */
/*   Updated: 2023/12/09 11:44:48 by cbajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long i)
{
	int	counter;

	counter = 0;
	if (i < 0)
	{
		counter += ft_putchar('-');
		counter += ft_putnbr(-i);
	}
	else if (i > 9)
	{
		counter += ft_putnbr(i / 10);
		counter += ft_putnbr(i % 10);
	}
	else
		counter += ft_putchar(i + '0');
	return (counter);
}
