/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl </var/mail/seunghyl>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 20:43:35 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/22 22:19:39 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	check(char c)
{
	if ((c <= 13 && c >= 9) || c == 32)
		return (1);
	if (c == '-')
		return (-1);
	if (c == '+')
		return (-2);
	if (c <= '9' && c >= '0')
		return (2);
	return (0);
}

int		ft_atoi(const char *str)
{
	int i;
	int result;
	int buho;

	i = 0;
	result = 0;
	buho = 1;
	while (check(str[i]) == 1)
		i++;
	if (check(str[i]) < 0)
	{
		if (check(str[i]) == -1)
		{
			buho *= -1;
			i++;
		}
	}
	while (check(str[i]) == 2)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * buho);
}

int		main(void)
{
	printf("%d\n", ft_atoi("  	--123"));
	printf("%d\n", (atoi("  	--123")));
}
