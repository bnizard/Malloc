/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnizard <bnizard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:46:25 by bnizard           #+#    #+#             */
/*   Updated: 2015/02/17 12:59:16 by bnizard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char			*ss;
	char				a;

	a = (unsigned char)c;
	ss = (char *)s;
	while (n > 0)
	{
		if (*ss == a)
			return ((void *)ss);
		ss++;
		n--;
	}
	return (0);
}
