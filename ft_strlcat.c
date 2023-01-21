/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:13:44 by dlom              #+#    #+#             */
/*   Updated: 2023/01/21 15:56:46 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	remain;
	size_t	i;
	size_t	j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	remain = dstlen - size;
	if (remain == 0)
		return (dstlen + srclen);
	i = dstlen;
	j = 0;
	while ((src[j]) && (j < remain))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dstlen + srclen);
}
