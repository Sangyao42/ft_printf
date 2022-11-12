/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:20:28 by sawang            #+#    #+#             */
/*   Updated: 2022/11/11 21:07:16 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	spec_write(va_list args, const char c, int *error)
{
	int	spec_n;

	spec_n = 0;
	if (c == 'c')
		spec_n = ft_putchar(va_arg(args, int), error);
	else if (c == 's')
		spec_n = ft_putstr(va_arg(args, char *), error);
	else if (c == 'p')
		spec_n = ft_putptr(va_arg(args, void *), error);
	else if (c == 'i' || c == 'd')
		spec_n = ft_putnbr(va_arg(args, int), error);
	else if (c == 'u')
		spec_n = ft_putnbr_unsigned(va_arg(args, unsigned int), error);
	else if (c == 'x')
		spec_n = ft_putnbr_hex_lower(va_arg(args, unsigned int), error);
	else if (c == 'X')
		spec_n = ft_putnbr_hex_upper(va_arg(args, unsigned int), error);
	else if (c == '%')
		spec_n = ft_putchar('%', error);
	return (spec_n);
}
