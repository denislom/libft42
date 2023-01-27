/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:54:00 by dlom              #+#    #+#             */
/*   Updated: 2023/01/25 16:54:00 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*returns a negative vallue if the first vlock is
lexicographically less than second
returns 0 if two memory blocks are equal
returns a positive value if the first memory 
block is grater than second*/
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)ptr1;
	p2 = (unsigned char *)ptr2;
	i = 0;
	while (n--)
	{
		if (p1[i] != p2[i])
			return (*p1 - *p2);
		i++;
	}
	return (0);
}
