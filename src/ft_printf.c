/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:00:40 by sawang            #+#    #+#             */
/*   Updated: 2022/11/12 17:57:02 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		counter;
	int		error;

	counter = 0;
	error = 0;
	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			counter += spec_write(args, format[i + 1], &error);
			i++;
		}
		else
			counter += ft_putchar(format[i], &error);
		i++;
		if (error < 0)
			return (-1);
	}
	va_end(args);
	return (counter);
}
