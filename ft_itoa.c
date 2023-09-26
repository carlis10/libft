/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:46:23 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/21 13:08:41 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intsize(int n, int s)
{
	if (n == -2147483648)
		return (11);
	else if (n < 0)
	{
		n = -n;
		ft_intsize(n, s + 1);
	}
	else if (n < 10)
	{
		s++;
		return (s);
	}
	else
	{
		s++;
		ft_intsize(n / 10, s + 1);
	}
}

char	*fill_str(char *c, int n, int s)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		c[i] = '-';
		i++;
		n = n / (10 * (s - 2));
	}
	else
	{
		n = n / (10 * (s - 1));
	}
	while (i < s)
	{
		c[i] = n - '0';
		n *= 10;
		i++;
	}
	c[i] = 0;
	return (c);
}

char	*ft_itoa(int n)
{
	int		s;
	char	*c;

	s = ft_intsize(n, 0);
	c = (char *)ft_calloc(s, sizeof(char));
	if (!c)
		return (NULL);
	c = fill_str(c, n, s);
	return (c);
}
