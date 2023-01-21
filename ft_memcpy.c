/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 09:42:12 by dlom              #+#    #+#             */
/*   Updated: 2023/01/21 10:29:56 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*t_dest;
	const char	*t_src;

	t_dest = dest;
	t_src = src;
	while (n--)
	{
		t_dest[i] = t_src[i];
		i++;
	}
	return (dest);
}
