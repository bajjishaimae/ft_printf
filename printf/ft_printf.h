/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbajji <cbajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:24:14 by cbajji            #+#    #+#             */
/*   Updated: 2023/12/09 11:46:23 by cbajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putadd(void *add);
int	ft_putchar(int c);
int	ft_putnbr_base(unsigned int nbr, char spec);
int	ft_putnbr_u(unsigned long i);
int	ft_putnbr(long i);
int	ft_putstr(char *str);
int	ft_printf(const char *format, ...);

#endif