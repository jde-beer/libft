/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:05:41 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/20 11:31:37 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*j;
	size_t	p;

	if (s == NULL)
		return (NULL);
	if (!(j = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	p = 0;
	while (len > p && s[p + start] != '\0')
	{
		j[p] = s[start + p];
		p++;
	}
	j[p] = '\0';
	return (j);
}
