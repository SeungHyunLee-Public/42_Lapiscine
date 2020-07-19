/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <lutious2@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 14:09:09 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/19 14:09:34 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.c>

char			**ft_split(char *str, char *charset)
{
	unsigned int	count;
	char			**result;
	unsigned int	len;

	if (!charset[0])
	{
