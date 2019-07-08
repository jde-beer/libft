/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:47:56 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/20 16:22:01 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	p;
	size_t			jp;

	jp = ft_strlen(s);
	p = 0;
	if (!s)
		return (NULL);
	while (s[p] == ' ' || s[p] == '\n' || s[p] == '\t')
		p++;
	while (s[jp - 1] == '\0' || s[jp - 1] == ' ' || s[jp - 1] == '\n'
			|| s[jp - 1] == '\t')
	{
		jp--;
	}
	jp = jp - p;
	return (ft_strsub(s, p, jp));
}
