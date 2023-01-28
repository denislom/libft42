/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:50:39 by dlom              #+#    #+#             */
/*   Updated: 2023/01/28 09:51:26 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] <= ' ')
			i++;
		else if (str[i] == '-')
			sign = sign * (-1);
		else if (str[i] > 64 && str[i] < 123)
		{
			i--;
			continue ;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
	}
	return (res * sign);
}
