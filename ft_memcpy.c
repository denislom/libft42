/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 09:42:12 by dlom              #+#    #+#             */
/*   Updated: 2023/01/23 16:40:47 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t		i;
// 	char		*t_dest;
// 	char		*t_src;

// 	if (!dest && !src)
// 		return (NULL);
// 	t_dest = (char *)dest;
// 	t_src = (char *)src;
// 	while (i < n)
// 	{
// 		t_dest[i] = t_src[i];
// 		i++;
// 	}
// 	return ((void *)t_dest);
// }
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*cdest;
	char		*csrc;

	if (!dest && !src)
		return (NULL);
	cdest = (char *)dest;
	csrc = (char *)src;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return ((void *)cdest);
}
