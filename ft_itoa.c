/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 09:20:44 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/12 16:27:19 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static	int	ft_length(long n)
{
	long	j;
	int		p;

	j = 0;
	p = 0;
	if (j < 0)
	{
		j *= -1;
		p++;
	}
	while (j > 0)
	{
		p /= 10;
		p++;
	}
	return (j);
}
char	*ft_itoa(int n)
{
	char	*j;
	long	p;
	int		d;

	p = n;
	d = ft_length(n);
	if(!(j = (char *)malloc(sizeof(char) * (d + 1))))
		return (NULL);
	j[d--] = '\0';
	if (p == 0)
	{
		j[0] = 48;
		return (j);
	}
	if (p < 0)
	{
		j[0] = '-';
		d *= -1;
	}
	while (p > 0)
	{
		j[d--] = (p % 10) + 48;
		p /= 10;
	}
	return (j);
}
