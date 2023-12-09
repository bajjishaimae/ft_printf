/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbajji <cbajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:34:58 by cbajji            #+#    #+#             */
/*   Updated: 2023/12/09 15:08:19 by cbajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char spec)
{
	int		counter;
	char	*base;

	counter = 0;
	if (spec == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < 16)
		counter += ft_putchar(base[nbr]);
	else
	{
		counter += ft_putnbr_base(nbr / 16, spec);
		counter += ft_putnbr_base(nbr % 16, spec);
	}
	return (counter);
}
