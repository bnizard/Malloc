/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnizard <bnizard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:51:13 by bnizard           #+#    #+#             */
/*   Updated: 2015/02/17 12:58:51 by bnizard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int	i;
	int				j;

	i = 0;
	if (s2[i] == 0)
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[i] == s2[j])
		{
			if (s2[j + 1] == '\0')
				return (&((char *)s1)[i - j]);
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
