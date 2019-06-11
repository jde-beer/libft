/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:36:06 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/11 14:05:04 by jde-beer         ###   ########.fr       */
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

static int	ft_wordlength(char *s, char c)
{
	int	j;
	int	p;

	j = 0;
	p = 0;
	while (s[j])
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		while (s[j] != c && s[j] != '\0')
		{
			j++;
			p++;
		}
	}
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**j;
	int		p;
	int		d;
	int		e;

	p = 0;
	d = 0;
	if (!s)
		return (NULL);
	if (!(j = (char **)malloc(sizeof(char) * (static ft_wordcount(s, c) + 1))))
		return (NULL);
	while (p < ft_wordcount(s, c))
	{
		e = 0;
		if (!(j = ft_strnew(static ft_wordlength(&s[d], c) + 1)))
			j[p] = NULL;
		while (s[d] == c)
			d++;
		while (s[d] != c && s[p])
			j[p][e++] == j[p++];
		j[p][e] = '\0';
		p++;
	}
}
