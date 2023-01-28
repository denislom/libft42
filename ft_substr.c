/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:20:48 by dlom              #+#    #+#             */
/*   Updated: 2023/01/28 12:54:25 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*RETURN VALUE: The substring.
NULL if the allocation fails

PARAMETRES: 
s: The string from which to create the substring.
start: The start index of the substring in the
string ’s’.
len: The maximum length of the substring

DESCRIPTION:
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	i = 0;
	substr = malloc((len * sizeof(char)) + 1);
	if ((size_t)start + len > (size_t)ft_strlen(s))
		len = (size_t)ft_strlen(s) - (size_t)start;
	else if (len > 0)
	{
		while (len--)
		{
			substr[i] = s[i + start];
			i++;
		}
	}
	substr[i] = '\0';
	return (substr);
}
