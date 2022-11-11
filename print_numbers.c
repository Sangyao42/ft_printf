/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:19:20 by sawang            #+#    #+#             */
/*   Updated: 2022/11/11 21:06:30 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int *error)
{
	if (n == -2147483648)
		return (ft_putstr("-2147483648", error));
	if (n < 0)
	{
		n = -n;
		return (ft_putchar('-', error) + ft_putnbr(n, error));
	}
	if (n >= 10)
		return (ft_putnbr(n / 10, error) + ft_putnbr(n % 10, error));
	return (ft_putchar(n + '0', error));
}

int	ft_putnbr_unsigned(unsigned int n, int *error)
{
	if (n >= 10)
		return (ft_putnbr_unsigned(n / 10, error) + \
		ft_putnbr_unsigned(n % 10, error));
	return (ft_putchar(n + '0', error));
}

int	ft_putnbr_hex_lower(unsigned int n, int *error)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		return (ft_putnbr_hex_lower(n / 16, error) + \
		ft_putnbr_hex_lower(n % 16, error));
	}
	return (ft_putchar(base[n % 16], error));
}

int	ft_putnbr_hex_upper(unsigned int n, int *error)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n >= 16)
	{
		return (ft_putnbr_hex_upper(n / 16, error) + \
		ft_putnbr_hex_upper(n % 16, error));
	}
	return (ft_putchar(base[n % 16], error));
}
