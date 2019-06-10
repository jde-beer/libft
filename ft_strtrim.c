/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:47:56 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/10 14:30:56 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*j;
	unsigned int	p;
	size_t	jp;

	if (!s)
		return (NULL);
	while (s[p] == " " || s[p] == "\n" || s[p] == "\t")
		p++;
	while (s[p] != '\0' || s[p] != " " || s[p] != "\n" || s[p] != "\t")
		jp++;
	return (ft_strsub(s, p, jp);
}
