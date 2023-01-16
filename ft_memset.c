/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:31:28 by dlom              #+#    #+#             */
/*   Updated: 2023/01/15 20:31:28 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// void	*ft_memset(void *str, int c, size_t n)
// {
// 	unsigned char	*ptr;

// 	ptr = (unsigned char*)str;
// 	while (n > 0)
// 	{
// 		*ptr = (unsigned char) c;
// 		ptr++;
// 		n--;
// 	}
// 	return (str);
// }

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}
