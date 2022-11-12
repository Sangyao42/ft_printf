/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_characters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:17:01 by sawang            #+#    #+#             */
/*   Updated: 2022/11/12 17:44:03 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int *error)
{
	if (print_write(&c, 1, error) < 0)
		*error = -1;
	return (1);
}

int	ft_putstr(char *str, int *error)
{
	int	i;

	if (!str)
	{
		if (print_write("(null)", 6, error) < 0)
			*error = -1;
		return (6);
	}
	i = 0;
	while (str[i])
		i++;
	if (print_write(str, i, error) < 0)
		*error = -1;
	return (i);
}
