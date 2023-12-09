/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbajji <cbajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:34:18 by cbajji            #+#    #+#             */
/*   Updated: 2023/12/09 15:21:19 by cbajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printy(char spec, va_list ptr)
{
	int	counter;

	counter = 0;
	if (spec == 'c')
		counter += ft_putchar(va_arg(ptr, int));
	else if (spec == 's')
		counter += ft_putstr(va_arg(ptr, char *));
	else if (spec == 'd' || spec == 'i')
		counter += ft_putnbr(va_arg(ptr, int));
	else if (spec == 'u')
		counter += ft_putnbr_u(va_arg(ptr, unsigned int));
	else if (spec == 'x' || spec == 'X')
		counter += ft_putnbr_base(va_arg(ptr, unsigned int), spec);
	else if (spec == 'p')
		counter += ft_putadd(va_arg(ptr, void *));
	else
		counter += ft_putchar(spec);
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		counter;

	va_start(ptr, format);
	counter = 0;
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1))
			counter += printy(*(++format), ptr);
		else if (*(format + 1))
			counter += write (1, format, 1);
		format++;
	}
	va_end(ptr);
	return (counter);
}
