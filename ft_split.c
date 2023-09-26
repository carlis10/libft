/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:19:29 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/21 12:44:59 by cravegli         ###   ########.fr       */
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
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	res = (char **)ft_calloc(count + 2, sizeof(char **));
	return (res);
}

char	**ft_fillstr(char	**res, char const *s, int *d, int c)
{
	int	i;

	i = 0;
	while (d[0] < d[1])
	{
		res[c][i] == s[d[0]];
		d[0]++;
		i++;
	}
	res[c][i] = 0;
	return (res);
}

char	**ft_fillsplit(char **res, char const *s, char c)
{
	int	i;
	int	j;
	int	*d;
	int	cn;

	i = 0;
	j = 0;
	d[0] = 0;
	cn = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			d[1] = i;
			res = ft_fillstr(res, s, d, cn);
			d[0] = i + 1;
			cn ++;
		}
		i++;
	}
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
