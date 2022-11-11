/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:00:33 by sawang            #+#    #+#             */
/*   Updated: 2022/11/11 20:49:32 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
// # include "libft/libft.h"

int	ft_putchar(char c, int *error);
int	ft_putstr(char *str, int *error);
int	ft_putptr(void *ptr, int *error);
int	ft_putnbr(int n, int *error);
int	ft_putnbr_unsigned(unsigned int n, int *error);
int	ft_putnbr_hex_lower(unsigned int n, int *error);
int	ft_putnbr_hex_upper(unsigned int n, int *error);
int	spec_write(va_list arg_list, const char c, int *error);
int	ft_printf(const char *format, ...);

#endif
