/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:55:27 by dlom              #+#    #+#             */
/*   Updated: 2023/01/25 22:55:27 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//the functions return a pointer to the first occurence of the substring
//returns null if a match is not found
//the function iterates over all possible up to the specified maximum length
char	*strnstr(const char *str, const char *substr, size_t len)
{
	size_t	substr_len;

	substr_len = ft_strlen(substr);
	if (!*substr)
		return ((char *)str);
	while (len > substr_len)
	{
		len--;
		if (!ft_memcmp(str, substr, len))
			return ((char *)str);
	}
	return (0);
}
