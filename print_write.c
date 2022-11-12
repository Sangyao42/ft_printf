/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_write.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:31:01 by sawang            #+#    #+#             */
/*   Updated: 2022/11/12 17:36:56 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_write(const void *buf, size_t nbyte, int *error)
{
	if (*error < 0)
		return (-1);
	*error = write(1, buf, nbyte);
	return (*error);
}
