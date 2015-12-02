/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnizard <bnizard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 13:24:40 by bnizard           #+#    #+#             */
/*   Updated: 2015/02/17 12:59:09 by bnizard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*tmp;

	tmp = (*alst);
	while (tmp)
	{
		del((tmp->content), (tmp->content_size));
		free(tmp);
		tmp = tmp->next;
	}
	free(tmp);
	tmp = NULL;
	(*alst) = NULL;
	alst = NULL;
}
