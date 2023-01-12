/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:32:47 by dlom              #+#    #+#             */
/*   Updated: 2023/01/12 14:08:38 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c >96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
