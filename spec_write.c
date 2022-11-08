/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:20:28 by sawang            #+#    #+#             */
/*   Updated: 2022/11/08 19:19:50 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	spec_write(va_list args, const char c)
{
	int	spec_n;

	spec_n = 0;
	if (c == 'c')
		spec_n = ft_putchar(va_arg(args, int));
	else if (c == 's')
		spec_n = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		spec_n = ft_putptr(va_arg(args, void *), &spec_n);
	else if (c == 'i' || c == 'd')
		spec_n = ft_putnbr(va_arg(args, int), &spec_n);
	else if (c == 'u')
		spec_n = ft_putnbr_unsigned(va_arg(args, unsigned int), &spec_n);
	else if (c == 'x')
		spec_n = ft_putnbr_hex_lower(va_arg(args, unsigned int), &spec_n);
	else if (c == 'X')
		spec_n = ft_putnbr_hex_upper(va_arg(args, unsigned int), &spec_n);
	else if (c == '%')
	{
		spec_n = 1;
		write(1, "%%", 1);
	}
	return (spec_n);
}
