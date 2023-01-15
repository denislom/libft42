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

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*dest = str;

	while (n > 0)
	{
		*dest = (unsigned char) c;
		dest++;
		n--;
	}
	return dest;
}
