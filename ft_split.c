/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Carlos <Carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:19:29 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/27 21:14:54 by Carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_memres(char const *s, char c)
{
	int		count;
	int		i;
	char	**res;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && ((s[i + 1] == c) || s[i + 1] == 0))
			count++;
		i++;
	}
	res = (char **)ft_calloc(count + 1, sizeof(char *));
	return (res);
}

char	**ft_fillstr(char	**res, char const *s, int *d, int c)
{
	int	i;

	i = 0;
	res[c] = (char *)ft_calloc((d[1] - d[0]), sizeof(char *));
	while (d[0] < d[1])
	{
		res[c][i] = s[d[0]];
		d[0]++;
		i++;
	}
	return (res);
}

char	**ft_fillsplit(char **res, char const *s, char c)
{
	int	i;
	int	d[2];
	int	cn;

	i = 0;
	d[0] = 0;
	cn = 0;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c)
		{
			d[1] = i + 1;
			res = ft_fillstr(res, s, d, cn);
			d[0] = d[1] + 1;
			cn ++;
		}
		if (s[i] != c && s[i + 1] == 0)
		{
			d[1] = i + 1;
			res = ft_fillstr(res, s, d, cn);
		}
		while (s[d[0]++] == c)
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	res = ft_memres(s, c);
	if (!res)
		return (0);
	res = ft_fillsplit(res, s, c);
	return (res);
}
