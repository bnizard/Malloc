/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnizard <bnizard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 12:54:54 by bnizard           #+#    #+#             */
/*   Updated: 2015/02/17 12:58:43 by bnizard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		l;
	char	*map;
	char	*ss;

	ss = (char *)s;
	l = 0;
	if (ss != NULL)
	{
		while (ss[l])
			l++;
	}
	if ((map = (char *)malloc(l + 1)) == NULL)
		return (NULL);
	i = 0;
	if (ss != NULL && f != NULL)
	{
		while (ss[i])
		{
			map[i] = f(i, ss[i]);
			i++;
		}
	}
	map[i] = '\0';
	return (map);
}
