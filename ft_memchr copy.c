/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:12:38 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/14 11:27:52 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*t;
	size_t		i;

	t = s;
	i = 0;
	while (i <= n && t[i] != '\0')
	{
		if (t[i] == (unsigned char)c)
			return (t[i]);
		i++;
	}
	return (0);
}
