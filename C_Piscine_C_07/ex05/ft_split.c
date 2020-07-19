/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <lutious2@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 14:08:15 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/19 14:08:55 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			**ft_split(char *str, char *charset)
{
	unsigned int	count;
	char			**result;
	unsigned int	len;

	if (!charset[0])
	{
		result = (char **)malloc(sizeof(char *) * 2);
		len = 0;
		while (str[len])
