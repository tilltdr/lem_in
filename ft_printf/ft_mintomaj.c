/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mintomaj.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-roqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 15:11:23 by tde-roqu          #+#    #+#             */
/*   Updated: 2016/01/28 15:21:55 by tde-roqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_mintomaj(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (96 < s[i] && s[i] < 123)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
