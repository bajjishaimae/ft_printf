/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbajji <cbajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:20:26 by cbajji            #+#    #+#             */
/*   Updated: 2023/12/09 11:45:43 by cbajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	if (!str)
	{
		return (ft_putstr("(null)"));
	}
	while (*str)
	{
		counter += ft_putchar(*str);
		str++;
	}
	return (counter);
}
