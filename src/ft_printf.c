/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:00:40 by sawang            #+#    #+#             */
/*   Updated: 2022/11/08 21:26:35 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		spec_counter;
	int		str_counter;

	spec_counter = 0;
	str_counter = 0;
	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			spec_counter += spec_write(args, format[i + 1]);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			str_counter++;
		}
		i++;
	}
	return (spec_counter + str_counter);
}
