/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:19:20 by sawang            #+#    #+#             */
/*   Updated: 2022/11/07 19:45:53 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putnbr(int n, int *spec_counter)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
		(*spec_counter)++;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, spec_counter);
		ft_putnbr(n % 10, spec_counter);
	}
	else
	{
		ft_putchar(n + '0');
		(*spec_counter)++;
	}
	return (*spec_counter);
}

int	ft_putnbr_unsigned(unsigned int n, int *spec_counter)
{
	if (n >= 10)
	{
		ft_putnbr_unsigned(n / 10, spec_counter);
		ft_putnbr_unsigned(n % 10, spec_counter);
	}
	else
	{
		ft_putchar(n + '0');
		(*spec_counter)++;
	}
	return (*spec_counter);
}
