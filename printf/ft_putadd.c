/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbajji <cbajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:06:24 by cbajji            #+#    #+#             */
/*   Updated: 2023/12/09 11:48:16 by cbajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_hex(unsigned long long nbr)
{
	int		counter;
	char	*base;

	base = "0123456789abcdef";
	counter = 0;
	if (nbr < 16)
		counter += ft_putchar(base[nbr]);
	else
	{
		counter += ft_put_hex(nbr / 16);
		counter += ft_put_hex(nbr % 16);
	}
	return (counter);
}

int	ft_putadd(void *add)
{
	int					counter;
	unsigned long long	ptr;

	ptr = (unsigned long long)add;
	counter = 0;
	counter += ft_putstr("0x");
	counter += ft_put_hex(ptr);
	return (counter);
}
