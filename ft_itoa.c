/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:13:01 by dlom              #+#    #+#             */
/*   Updated: 2023/01/29 20:13:01 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
DESCRIPTION: Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.

PARAMETRES: n - the integer to convert.

RETURNs the string representing the integer.
NULL if the allocation fails.
*/
int	ft_n_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1)
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n = n * (-1);
	}
	while(n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char *ft_itoa(int n)
(

)
