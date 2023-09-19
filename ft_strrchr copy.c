/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:34:39 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/19 11:47:12 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	p;
	int				i;
	int				size;

	p = c;
	i = 0;
	size = ft_strlen(s) - 1;
	while (s[size] != p && size < 0)
		size--;
	return (s[size]);
}
