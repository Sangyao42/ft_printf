/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:20:28 by sawang            #+#    #+#             */
/*   Updated: 2022/11/07 18:42:18 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	spec_write(va_list args, const char c)
{
	int	spec_n;

	spec_n = 0;
	if (c == 'c')
		spec_n = ft_putchar(va_arg(args, int));
		// printf("test return value: %d\n", spec_n);
	else if (c == 's')
		spec_n = ft_putstr(va_arg(args, char *));
		// printf("test return value: %d\n", spec_n);
	else if (c == 'p')
	{
		spec_n = ft_putptr(va_arg(args, void *));
		// printf("test return value: %d\n", spec_n);
		printf("HI");
	}
	else if (c == 'i' || c == 'd')
		spec_n = ft_putnbr(va_arg(args, int), &spec_n);
		// printf("test return value: %d\n", spec_n);
	else if (c == 'u')
	{
		spec_n = ft_putnbr_unsigned(va_arg(args, unsigned int), &spec_n);
		// printf("test return value: %d\n", spec_n);
	}
	return (spec_n);
}
