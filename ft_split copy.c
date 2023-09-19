/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:19:29 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/19 14:41:40 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cntchr(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		count;
	int		i;
	int		j;

	count = ft_cntchr(s, c);
	j = 0;
	res = (char *)ft_calloc(count + 2, sizeof(char *));
	if (!res)
		return (0);
	res[count - 1] = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			
		}
		i++;
	}
	
	return (res);
}
