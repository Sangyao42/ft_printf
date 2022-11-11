/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_addr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:24:47 by sawang            #+#    #+#             */
/*   Updated: 2022/11/11 21:06:42 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_ptr_to_hex(unsigned long n, int *error)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		return (convert_ptr_to_hex(n / 16, error) + \
		convert_ptr_to_hex(n % 16, error));
	return (ft_putchar(base[n % 16], error));
}

int	ft_putptr(void *ptr, int *error)
{
	return (ft_putstr("0x", error) + \
	convert_ptr_to_hex((unsigned long)ptr, error));
}
