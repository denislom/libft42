/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:13:48 by dlom              #+#    #+#             */
/*   Updated: 2023/01/12 14:13:48 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"

int	main(void)
{
	printf("TEST ft_isalpha(int c)\n");
	printf("ft_isalpha('2') %d\n", ft_isalpha('2'));
	printf("ft_isalpha('a') %d\n", ft_isalpha('a'));
	printf("ft_isalpha('A') %d\n", ft_isalpha('A'));
	printf("ft_isalpha('z') %d\n", ft_isalpha('z'));

	printf("TEST ft_isdigit(int c)\n");
	printf("ft_isdigit('9') %d\n", ft_isdigit('9'));
	printf("ft_isdigit('0') %d\n", ft_isdigit('0'));
	printf("ft_isdigit('a') %d\n", ft_isdigit('a'));
	printf("ft_isdigit('z') %d\n", ft_isdigit('z'));

	printf("TEST ft_isalnum(int a)\n");
	printf("ft_isalnum('9') %d\n", ft_isalnum('9'));
	printf("ft_isalnum('0') %d\n", ft_isalnum('0'));
	printf("ft_isalnum('a') %d\n", ft_isalnum('a'));
	printf("ft_isalnum('z') %d\n", ft_isalnum('z'));
	printf("ft_isalnum('{') %d\n", ft_isalnum('{'));
	printf("ft_isalnum('`') %d\n", ft_isalnum('`'));
	printf("ft_isalnum('[') %d\n", ft_isalnum('['));
	printf("ft_isalnum('@') %d\n", ft_isalnum('@'));
	return (0);
}
