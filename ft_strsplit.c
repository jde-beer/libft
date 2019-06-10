/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:36:06 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/10 16:03:22 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_wordcount(char *s, char c)
{
	int j;
	int p;
	
	while (j[n])
	{
		while (s[j] == c  && s[j] != '\0')
			j++;
		if (s[j] != c && s[j] != '\0')
			p++;
		while (s[j] != c && s[j] != '\0')
			j++;
	}
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	char	*j;

	if (!s)
		return (NULL);
	if (!(j = (char *)malloc(sizeof(char) * (ft_wordcount(s) + 1))))
		return (NULL);

}
