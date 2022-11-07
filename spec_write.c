/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:20:28 by sawang            #+#    #+#             */
/*   Updated: 2022/11/07 13:50:02 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	spec_write(va_list args, const char c)
{
	int	spec_counter;

	spec_counter = 0;
	if (c == 'c')
		spec_counter += ft_putchar(va_arg(args, int));
	// printf("test return value: %d\n", spec_counter);
	else if (c == 's')
		spec_counter += ft_putstr()

	return (spec_counter);
}

