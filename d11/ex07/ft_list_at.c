/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 20:21:10 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/25 20:55:15 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*node;

	i = 0;
	node = begin_list;
	if (node)
	{
		while (node->next && i < nbr)
		{
			node = node->next;
			i++;
		}
		if (i == nbr)
			return (node);
	}
	return (NULL);
}
