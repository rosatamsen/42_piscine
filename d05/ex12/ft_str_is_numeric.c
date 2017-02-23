/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:47:22 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/17 20:21:49 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int result;

	i = 0;
	result = 1;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			result = 0;
		i++;
	}
	return (result);
}