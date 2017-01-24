/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 13:55:03 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/24 14:02:36 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], t[i + 1]) <= 0)
			i++;
		else
			break ;
	}
	if (i == length - 1)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], t[i + 1]) >= 0)
			i++;
		else
			break ;
	}
	if (i == length - 1)
		return (1);
	return (0);
}
