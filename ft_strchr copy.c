/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:11:14 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/13 14:33:23 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	p;
	int		size;
	int		i;

	p = c;
	i = 0;
	size = 0;
	while (s[size] != '\0')
		size++;
	while (s != p && i <= size)
	{
		s++;
		i++;
	}
	if (i == size && p != '\0')
		return (0);
	return (s);
}
