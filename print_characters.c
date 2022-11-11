/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_characters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:17:01 by sawang            #+#    #+#             */
/*   Updated: 2022/11/11 22:25:11 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int *error)
{
	if (*error < 0)
	{
		return (-1);
	}
	if (write(1, &c, 1) < 0)
		*error = -1;
	return (1);
}

int	ft_putstr(char *str, int *error)
{
	int	i;

	if (!str)
	{
		if (write(1, "(null)", 6) < 0)
			*error = -1;
		return (6);
	}
	i = 0;
	while (str[i])
		i++;
	if (write(1, str, i) < 0)
		*error = -1;
	return (i);
}
