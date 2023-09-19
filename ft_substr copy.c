/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:27:48 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/14 14:42:01 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	int		i;
	int		j;

	i = start;
	r = (char)ft_calloc(len, sizeof(char));
	if (!r)
		return (0);
	while (s[i] != '\0' && j < len)
	{
		r[j] = s[i];
		j++;
		i++;
	}
	return (r);
}
