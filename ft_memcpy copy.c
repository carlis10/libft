/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:01:37 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/13 14:54:46 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*l;
	const unsigned char		*t;
	int						i;

	i = 0;
	l = dst;
	t = src;
	while (i < n)
	{
		l[i] = t[i];
		i++;
	}
	return (dst);
}
