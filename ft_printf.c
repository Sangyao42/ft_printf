/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:00:40 by sawang            #+#    #+#             */
/*   Updated: 2022/11/07 20:04:57 by sawang           ###   ########.fr       */
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
	printf("return value sum = %d+%d\n", spec_counter, str_counter);
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
	// char str1[] = "%c\ntesting with specifier, length 36\n";
	// int i_char = ft_printf(str1, 'a');
	// printf("%d\n", i_char);

	// int	i_str = ft_printf("str %s has length 26.\n", "string");
	// printf("%d\n", i_str);

	// int	i_int_basic = ft_printf("interger %i has length 28.\n", 987);
	// printf("%d\n", i_int_basic);

	// int i_int_negative = ft_printf("negative integer %i has length 36\n", -987);
	// printf("%d\n", i_int_negative);

	// int i_int_intmin = ft_printf("min interger %i has length 39\n", -2147483648);
	// printf("%d\n", i_int_intmin);

	// int	i_dec_basic = ft_printf("dec_nbr %d has length 27.\n", 987);
	// printf("%d\n", i_dec_basic);

	// int i_dec_negative = ft_printf("negative dec_nbr %d has length 36\n", -987);
	// printf("%d\n", i_dec_negative);

	// int i_dec_intmin = ft_printf("min dec_nbr %d has length 38\n", -2147483648);
	// printf("%d\n", i_dec_intmin);

	int	i_unsigned_basic = ft_printf("unsigned_int %u has length 32.\n", 987);
	printf("%d\n", i_unsigned_basic);

	int i_unsigned_negative = ft_printf("negative unsigned_int %u has length ?\n", -987);
	printf("%d\n", i_unsigned_negative);
	printf("@%d\n", printf("negative unsigned_int %u has length ?\n", -987));

	int i_unsigned_minusone = ft_printf("unsigned max: %u\n", 4294967295);
	printf("%d\n", i_unsigned_minusone);
	
	int i_unsigned_intmin = ft_printf("min unsigned_int %u has length ?\n", -2147483648);
	printf("%d\n", i_unsigned_intmin);
	// printf("@%d\n", printf("min unsigned_int %u has length ?\n", -2147483648));

	int i_unsigned_zero = ft_printf("zero %u has length ?\n", 0);
	printf("%d\n", i_unsigned_zero);
	printf("@%d\n", printf("zero %u has length ?\n", 0));

	int i_unsigned_max = ft_printf("unsigned max: %u\n", 4294967295);
	printf("%d\n", i_unsigned_max);


	return (0);
}
