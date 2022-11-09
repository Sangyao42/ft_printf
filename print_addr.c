/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_addr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:24:47 by sawang            #+#    #+#             */
/*   Updated: 2022/11/08 19:25:18 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_ptr_to_hex(unsigned long n, int *spec_counter)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		convert_ptr_to_hex(n / 16, spec_counter);
		convert_ptr_to_hex(n % 16, spec_counter);
	}
	else
	{
		ft_putchar(base[n % 16]);
		(*spec_counter)++;
	}
	return (*spec_counter);
}

int	ft_putptr(void *ptr, int *spec_counter)
{
	int	size;

	write(1, "0x", 2);
	size = convert_ptr_to_hex((unsigned long)ptr, spec_counter);
	return (2 + size);
}
