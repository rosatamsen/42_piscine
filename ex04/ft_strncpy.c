/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 10:11:41 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/17 11:23:24 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dst, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && (src[i] && dst[i]))
	{
		dst[i] = src[i];
		i++;
	}
	while (dst[i])
		dst[i++] = '\0';
	return (dst);
}
