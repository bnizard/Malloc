/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnizard <bnizard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 19:31:15 by bnizard           #+#    #+#             */
/*   Updated: 2015/02/17 12:58:30 by bnizard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int		c;

	c = 0;
	while (s1[c] != '\0' && s1[c] == s2[c])
		c++;
	return (s1[c] - s2[c]);
}
