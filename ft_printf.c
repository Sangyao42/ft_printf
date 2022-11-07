/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:00:40 by sawang            #+#    #+#             */
/*   Updated: 2022/11/07 13:49:14 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

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
			// specifier_counter = get_specifier_and_write(arg_list, format[i + 1]);
			spec_counter = spec_counter + spec_write(args, format[i + 1]);
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

int	main(void)
{
	// char	*str;
	// int		i;

	// i = 0;
	// str = "testing write()";
	// while (i < ft_strlen(str))
	// {
	// 	write(1, &str[i], 1);
	// 	i++;
	// }
	// write(1, "\n", 1);
	char str1[] = "%c\ntesting with specifier, length 36\n";
	int i = ft_printf(str1, 'a');
	printf("%d\n", i);
	return (0);
}
