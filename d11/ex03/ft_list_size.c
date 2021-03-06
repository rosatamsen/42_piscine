/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 20:08:05 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/25 15:17:20 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*next_node;
	int		size;

	size = 0;
	next_node = begin_list;
	while (next_node)
	{
		next_node = next_node->next;
		size++;
	}
	return (size);
}
