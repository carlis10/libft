/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:10:40 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/14 12:59:26 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;

	i = 0;
	while (haystack != '\0' && i <= len)
	{
		if (haystack == needle[0])
		{
			if (ft_strncmp(haystack, needle, len) == 0)
				return (haystack);
		}
		haystack++;
		i++;
	}
	return (0);
}
